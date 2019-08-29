// This program shows off cache associativity using C++
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <cstdlib>

// Benchmark for showing cache associativity
static void assocBench(benchmark::State &s){
    // Use a variable step size (power of 2)
    int step = 1 << s.range(0);
    
    // Size of the array is constant (32MB)
    int N = 1 << 14;
    int *a = new int[N];

    // Initialize the array with some random numbers
    for(int i = 0; i < N; i++){
        a[i] = rand() % 100;
    }

    // Profile the runtime of different step sizes
    while(s.KeepRunning()){
        int i = 0;
        // Perform 10k accesses
        for(int iter = 0; iter < N; iter++){
            // Just increment this int
            a[i]++;
            // Wrap back around to the beginning of the array
            i = (i + step) % N;
        }
    }
}
// Register the benchmark
BENCHMARK(assocBench)->DenseRange(0, 10);

// Benchmark main function
BENCHMARK_MAIN();
