// This file contains a set of naive functions to compare against an
// optimized library like MKL
// By: Nick from CoffeeBeforeArch

#include <chrono>
#include <cstdlib>

// General Matrix Multiplication
// Arguments
//  a       = Input matrix (m x k)
//  b       = Input matrix (k x n)
//  c       = Result matrix (m x n)
//  alpha   = Scaling factor for A
//  beta    = Scaling factor for C
template <class T>
void simple_gemm(T *a, T *b, T *c, int m, int n, int k, T alpha, T beta) {
  // Temp variable for accumulating the results
  T temp;
  // For each row...
  for (int i = 0; i < m; i++) {
    // For each column...
    for (int j = 0; j < n; j++) {
      // Reset partial result
      temp = 0;
      // Calculate 1 element of the final matrix
      for (int l = 0; l < k; l++) {
        temp += alpha * a[i * k + l] * b[l * n + j];
      }
      // Write it back to the result matrix
      c[i * n + j] = beta * c[i * n + j] + temp;
    }
  }
}

// Initializes a matrix of dimension "m x n"
// Arguments
//  a       = Matrix
//  m       = Number of rows
//  n       = Number of columns
//  value   = Specifies random numbers or 0 initialization
template <class T>
void init_matrix(T *a, int m, int n, T value = 1) {
  for (int i = 0; i < m * n; i++) {
    if (value == 1) {
      a[i] = (T)(rand() % 100);
    } else {
      a[i] = 0;
    }
  }
}

// Helper function for getting the current time for profiling
std::chrono::high_resolution_clock::time_point get_time() {
  return std::chrono::high_resolution_clock::now();
}
