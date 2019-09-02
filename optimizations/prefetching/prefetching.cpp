// This program shows how the prefetching impacts performance in C++
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>

// Accesses an array sequentially in row-major fashion
static void rowMajor(benchmark::State &s) {
  // Create a very large array (64MB)
  int N = 1 << 12;
  int *array = new int[N * N];

  // Profile a simple traversal with simple additions
  while (s.KeepRunning()) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        array[i * N + j] += j;
      }
    }
  }
}
// Register the benchmark
BENCHMARK(rowMajor)->Unit(benchmark::kMillisecond);

// Accesses an array sequentially in column-major fashion
static void columnMajor(benchmark::State &s) {
  // Create a very large array (64MB)
  int N = 1 << 12;
  int *array = new int[N * N];

  // Profile a simple traversal with simple additions
  while (s.KeepRunning()) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        array[j * N + i] += j;
      }
    }
  }
}
// Register the benchmark
BENCHMARK(columnMajor)->Unit(benchmark::kMillisecond);

// Accesses an array fairly randomly
static void randomStride(benchmark::State &s) {
  // Create a very large array (64MB)
  int N = 1 << 12;
  int *array = new int[N * N];

  // Profile a random traversal with simple additions
  while (s.KeepRunning()) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        array[j * N + rand() % N] += j;
      }
    }
  }
}
// Register the benchmark
BENCHMARK(randomStride)->Unit(benchmark::kMillisecond);

// Benchmark main functions
BENCHMARK_MAIN();
