// This program compares a naive matrix multiplication function
// against dgemm from Intel MKL.
// C = alpha * A * B + beta * C
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include "../common/naive_functions.h"
#include "mkl.h"

using namespace std;
using namespace std::chrono;

int main() {
  // Matrices
  double *A, *B, *C;

  // Matrix dimensions
  int m, n, k;
  m = 2000;
  k = 200;
  n = 1000;

  // Scale factors
  double alpha, beta;
  alpha = 1.0;
  beta = 0.0;

  // Allocate 64-byte-aligned memory
  // A is a "m x k" matrix
  A = (double *)mkl_malloc(m * k * sizeof(double), 64);
  // B is a "k x n" matrix
  B = (double *)mkl_malloc(k * n * sizeof(double), 64);
  // C is a "m x n" matrix
  C = (double *)mkl_malloc(m * n * sizeof(double), 64);

  // Initialize the matrices
  init_matrix<double>(A, m, k);
  init_matrix<double>(B, k, n);
  // Initialize the result matrix to 0s
  init_matrix<double>(C, m, n, 0);

  // Compute dgemm and record execution time
  auto mkl_t1 = get_time();
  cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, m, n, k, alpha, A, k,
              B, n, beta, C, n);
  auto mkl_t2 = get_time();

  // Compute the execution time
  auto mkl_time_span = duration_cast<duration<double>>(mkl_t2 - mkl_t1);
  cout << "Elapsed time MKL: " << mkl_time_span.count() << " s" << endl;

  // Compute our own dgemm and record execution time
  auto simple_t1 = get_time();
  simple_gemm(A, B, C, m, n, k, alpha, beta);
  auto simple_t2 = get_time();

  // Compute the execution time
  auto simple_time_span =
      duration_cast<duration<double>>(simple_t2 - simple_t1);
  cout << "Elapsed time simple: " << simple_time_span.count() << " s" << endl;

  // Free the memory
  mkl_free(A);
  mkl_free(B);
  mkl_free(C);

  return 0;
}
