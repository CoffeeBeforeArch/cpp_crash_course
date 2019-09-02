// This program shows off some performance benefits of using the new
// parallel execution modes in the C++ Standard Library
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>
#include <ctime>
#include <execution>
#include <vector>

using namespace std;

static void SequencedBench(benchmark::State &s) {
  // Get the number of elements from the range
  int N = 1 << s.range(0);

  // Set the random seed
  srand(time(NULL));

  // Create a vector of random numbers
  vector<int> v;
  v.reserve(N);
  for (int i = 0; i < N; i++) {
    v.emplace_back(rand() % 2);
  }

  // Now reduce them!
  int ret = 0;
  while (s.KeepRunning()) {
    // Sequenced execution (no change here from normal STL)
    ret = reduce(std::execution::seq, v.begin(), v.end());
  }
}

// Register the benchmark
BENCHMARK(SequencedBench)->DenseRange(15, 22)->Unit(benchmark::kMillisecond);

static void ParallelBench(benchmark::State &s) {
  // Get the number of elements from the range
  int N = 1 << s.range(0);

  // Set the random seed
  srand(time(NULL));

  // Create a vector of random numbers
  vector<int> v;
  v.reserve(N);
  for (int i = 0; i < N; i++) {
    v.emplace_back(rand() % 2);
  }

  // Now reduce them!
  int ret = 0;
  while (s.KeepRunning()) {
    // Parallel execution (work may be parallelized here)
    ret = reduce(std::execution::par, v.begin(), v.end());
  }
}
// Register the benchmark
BENCHMARK(ParallelBench)->DenseRange(15, 22)->Unit(benchmark::kMillisecond);

static void ParallelUnsequencedBench(benchmark::State &s) {
  // Get the number of elements from the range
  int N = 1 << s.range(0);
  // Set the random seed
  srand(time(NULL));

  // Create a vector of random numbers
  vector<int> v;
  v.reserve(N);
  for (int i = 0; i < N; i++) {
    v.emplace_back(rand() % 2);
  }

  // Now reduce them!
  int ret = 0;
  while (s.KeepRunning()) {
    // Paralllel Un-sequenced execution (work may be vectorized)
    ret = reduce(std::execution::par_unseq, v.begin(), v.end());
  }
}
// Register the benchmark
BENCHMARK(ParallelUnsequencedBench)
    ->DenseRange(15, 22)
    ->Unit(benchmark::kMillisecond);

// Benchmark main function
BENCHMARK_MAIN();
