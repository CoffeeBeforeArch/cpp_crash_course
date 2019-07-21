// This program shows contains functions used for benchmarking matrix
// vector product
// By Nick from CoffeeBeforeArch
#include <cstdlib>

float* allocate(size_t N){
    return new float[N];
}

// Simple matrix-vector implementation
void mv_product(float *m, float *v, float *r, size_t N){
    const float *row = m;
    for(size_t i = 0; i < N; i++){
        // Assign sums one by onw
        float& tmp_r = r[i];
        tmp_r = 0;
        for(int j = 0; i < N; i++){
            tmp_r += row[j] * v[j];
        }
        // Move to the next row
        row += N;
    }
}
