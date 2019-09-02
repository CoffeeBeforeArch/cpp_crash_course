// This program implements a simple benchmark for matrix-vector
// multiplication with fixed alignment.
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <immintrin.h>
#include <cstdlib>

using namespace std;

// Inlined function that uses intrinsic
inline float prod_8(float *m_v, float *v) {
  // Type punning with a union
  union {
    float r[8];
    __m256 rv;
  };

  // Dot product intrinsic
  rv = _mm256_dp_ps(_mm256_load_ps(m_v), _mm256_load_ps(v), 0xf1);

  // Now add the two partial sums together
  return r[0] + r[4];
}

// Do MV in multiples of eight using a helper function that uses an
// intrinsic (assumes multiple of eight input)
float vv_prod(float *m_v, float *v, int dim) {
  float res = 0;
  for (int i = 0; i < dim; i += 8) {
    res += prod_8(m_v + i, v + i);
  }

  return res;
}

// Matrix-Vector Multiplication
void matrix_vector(float *m, float *v, float *r, int dim) {
  for (int i = 0; i < dim; i++) {
    r[i] = vv_prod(&m[i * dim], &v[0], dim);
  }
}

// Helper allocator function for posix_memalign
float *allocate(size_t bytes) {
  void *memory;
  if (posix_memalign(&memory, 64, bytes)) abort();
  return static_cast<float *>(memory);
}

static void mvBench(benchmark::State &s) {
  // Get the size from the input
  int dim = 1 << s.range(0);

  // Allocate and initialize
  float *matrix = allocate(dim * dim * sizeof(float));
  float *vec = allocate(dim * sizeof(float));
  float *res = allocate(dim * sizeof(float));

  // Initialize the allocated space
  for (int i = 0; i < dim; i++) {
    vec[i] = rand() % 100;
    res[i] = 0;
    for (int j = 0; j < dim; j++) {
      matrix[i * dim + j] = rand() % 100;
    }
  }

  // Run matrix vector product in a loop
  while (s.KeepRunning()) {
    matrix_vector(matrix, vec, res, dim);
  }

  // Free our memory
  free(matrix);
  free(vec);
  free(res);

  // Set the items processed
  s.SetItemsProcessed(dim * dim * s.iterations());

  // Set bytes processed
  s.SetBytesProcessed(sizeof(float) * dim * (dim + 2) * s.iterations());
}
// Register the benchmark
BENCHMARK(mvBench)->DenseRange(8, 10);

// Benchmark main function
BENCHMARK_MAIN();
