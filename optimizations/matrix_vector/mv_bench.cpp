// This program implements a simple benchmark for matrix vector
// multiplication to show a basic optimization process
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>

using namespace std;

void matrix_vector(float *m, float *v, float *r, int dim) {
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      r[i] += v[j] * m[i * dim + j];
    }
  }
}

static void mvBench(benchmark::State &s) {
  // Get the size from the input
  int dim = 1 << s.range(0);

  // Allocate and initialize
  float *matrix = new float[dim * dim];
  float *vec = new float[dim];
  float *res = new float[dim];

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
  delete[] matrix;
  delete[] vec;
  delete[] res;

  // Set the items processed
  s.SetItemsProcessed(dim * dim * s.iterations());

  // Set bytes processed
  s.SetBytesProcessed(sizeof(float) * dim * (dim + 2) * s.iterations());
}
// Register the benchmark
BENCHMARK(mvBench)->DenseRange(8, 10);

// Benchmark main function
BENCHMARK_MAIN();
