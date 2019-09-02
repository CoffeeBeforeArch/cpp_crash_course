// This benchmark is a basic example of how to use Google benchmark
// for studying the memory hierarchy
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <limits>
#include <vector>
#include "rng.h"

static void cacheBench(benchmark::State &s) {
  // Get the size from the input
  int bytes = 1 << s.range(0);

  // Share the size between data and indices
  int count = (bytes / sizeof(int) / 2);

  // Initialize this vector with random values
  std::vector<int> v;
  for (auto i : rng(std::numeric_limits<int>::min(),
                    std::numeric_limits<int>::max(), count)) {
    v.push_back(i);
  }

  // Initialize this vector with random indices
  std::vector<int> indices;
  for (auto i : rng(0, count, count)) {
    indices.push_back(i);
  }

  // Now lets randomly access the values using the indices
  while (s.KeepRunning()) {
    long sum = 0;
    for (int i : indices) {
      sum += v[i];
    }
    // Make sure that sum isn't optimized out
    benchmark::DoNotOptimize(sum);
  }

  // We can set the number of bytes we have processed
  s.SetBytesProcessed(long(s.iterations()) * long(bytes));
  // Insert a custom label
  s.SetLabel(std::to_string(bytes / 1024) + "kb");
}
// Register the benchmark
// DenseRange allows us to generate a set of inputs
// ReportAggregatesOnly allows us to limit our output
BENCHMARK(cacheBench)->DenseRange(13, 26)->ReportAggregatesOnly(true);

// This is basically our main function
BENCHMARK_MAIN();
