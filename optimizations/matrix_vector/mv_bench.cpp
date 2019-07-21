// This file contains the benchmark for proviling matrix-vector
// performance
// By: Nick from CoffeeBeforeArch

#include <benchmark/benchmark.h>
#include <vector>
#include <cstdlib>
#include "mv_product.h"

// Creates random numbers based on a range
void make_random_data(float *a, unsigned int seed, size_t N){
    srand(seed);
    unsigned int s1 = seed;
    unsigned int s2 = seed;
    for(size_t i = 0; i < N; i++){
        a[i] = rand_r(&s1) * rand_r(&s2);
    }
}

//extern float* allocate(size_t N);
//extern void mv_product(float *m, float *v, float *r, size_t N);

static void BM_mv_prod(benchmark::State& state){
    // Allocate for our matrix, vector, and result
    size_t N = state.range(0);
    float *m = allocate(N * N);
    float *v = allocate(N);
    float *r = allocate(N);

    // Init data
    make_random_data(m, 1, N*N);
    make_random_data(v, 1, N);

    // Profile this section
    while(state.KeepRunning()){
        mv_product(m, v, r, N);
    }

    // Free memory
    delete [] m;
    delete [] v;
    delete [] r;

    state.SetItemsProcessed(N*N*state.iterations());
    state.SetBytesProcessed(sizeof(float)*N*(N + 2)*state.iterations());

    char buf[1024];
    snprintf(buf, sizeof(buf), "Memory: %ld+%ld+%ld (K)",
            sizeof(float)*N*N/1024,
            sizeof(float)*N/1024,
            sizeof(float)*N/1024);
    state.SetLabel(buf);
}
BENCHMARK(BM_mv_prod)->RangeMultiplier(2)->Range(1<<8, 1<<10);

BENCHMARK_MAIN();
