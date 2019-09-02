// This program shows off cache associativity using C++
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>

// Benchmark for showing cache associativity
static void assocBench(benchmark::State &s) {
  // Use a variable step size (power of 2)
  int step = 1 << s.range(0);

  // Size of the array is constant (32MB)
  int N = 1 << 25;
  char *a = new char[N];

  // Initialize the array with some random numbers
  for (int i = 0; i < N; i++) {
    a[i] = rand() % 100;
  }

  // Profile the runtime of different step sizes
  while (s.KeepRunning()) {
    int i = 0;
    // Perform 10k accesses
    for (int iter = 0; iter < 10000; iter++) {
      // Just increment this int
      a[i]++;
      // Wrap back around to the beginning of the array
      i = (i + step) % N;
    }
  }

  // Free the memory
  delete[] a;
}
// Register the benchmark
BENCHMARK(assocBench)->DenseRange(0, 16)->Unit(benchmark::kMicrosecond);

// Benchmark main function
BENCHMARK_MAIN();
