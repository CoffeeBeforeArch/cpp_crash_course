// This program shows off high resolution clocks in the C++11 standard
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <chrono>
#include <stdlib.h>

using namespace std;
using namespace std::chrono;

// Helper function for getting the current time for profiling
high_resolution_clock::time_point get_time(){
    return high_resolution_clock::now();
}

int main(){
    // Vector size
    int N = 1 << 25;

    // Allocate 3 arrays
    int *a = new int[N];
    int *b = new int[N];
    int *c = new int[N];

    // Initialize the vectors
    for(int i = 0; i < N; i++){
        a[i] = rand() % 100 + 1;
        b[i] = rand() % 100 + 1;
    }

    // Perform and profile vector addition
    auto begin = get_time();
    for(int i = 0; i < N; i++){
        c[i] = a[i] + b[i];
    }
    auto end = get_time();

    // Compute the execution time
    auto span = duration_cast<duration<double, nano>>(end - begin);
    cout << "Elapsed time : " << span.count() << " ns" << endl;

    // Free memory
    delete [] a;
    delete [] b;
    delete [] c;

    return 0;
}
