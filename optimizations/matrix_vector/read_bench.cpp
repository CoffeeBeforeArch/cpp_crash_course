// This program implements a simple memory benchmark in C++
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>
#include <cstring>

using namespace std;

static void readBench(benchmark::State &s) {
  // Get the size from the input
  int dim = 1 << s.range(0);

  // Allocate and initialize
  float *matrix = new float[dim * dim];
  for (int i = 0; i < dim * dim; i++) {
    matrix[i] = rand() % 100;
  }

  float sink = 0;

  while (s.KeepRunning()) {
    for (int i = 0; i < dim * dim; i++) {
      sink = matrix[i];
    }
  }
  benchmark::DoNotOptimize(sink);

  // Set the items processed
  s.SetItemsProcessed(dim * dim * s.iterations());

  // Set bytes processed
  s.SetBytesProcessed(sizeof(float) * dim * dim * s.iterations());
}
// Register the benchmark
BENCHMARK(readBench)->DenseRange(8, 10);

// Benchmark main function
BENCHMARK_MAIN();
