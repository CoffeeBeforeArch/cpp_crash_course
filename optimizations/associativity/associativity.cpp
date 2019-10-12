// This program shows off cache associativity using C++
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <algorithm>
#include <array>
#include <cstdlib>

using std::array;
using std::generate;

// Benchmark for showing cache associativity
static void assocBench(benchmark::State &s) {
  // Use a variable step size (power of 2)
  int step = 1 << s.range(0);

  // Size of the array is constant (32MB)
  const int N = 1 << 25;
  array<int, N> a;

  // Initialize the array with some random numbers
  generate(begin(a), end(a), []() { return rand() % 100; });

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
}
// Register the benchmark
BENCHMARK(assocBench)->DenseRange(0, 16)->Unit(benchmark::kMicrosecond);

// Benchmark main function
BENCHMARK_MAIN();
