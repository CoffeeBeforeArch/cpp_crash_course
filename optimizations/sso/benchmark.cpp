// This program contains a simple benchmark for testing the how the SSO
// helps performance on small strings

#include <benchmark/benchmark.h>
#include <string>
#include <vector>

using namespace std;

static void stringBench(benchmark::State &s) {
  // Get the number of characters for our string
  int string_len = s.range(0);

  // Vector for holding the strings
  vector<string> v;
  v.reserve(10000);

  // Now let's push back a ton of strings
  while (s.KeepRunning()) {
    for (int i = 0; i < 10000; i++) {
      // Create the string of a specified size
      string str(string_len, 'a');
      v.push_back(str);
    }
  }
}
// Register the benchmark and specify a range of string values
BENCHMARK(stringBench)->DenseRange(0, 32)->Unit(benchmark::kMillisecond);

// Benchmark main function
BENCHMARK_MAIN();
