// This program compares a naive matrix multiplication function
// against dgemm from Intel MKL.
// C = alpha * A * B + beta * C
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include "mkl.h"
#include "../common/naive_functions.h"

using namespace std;

int main(){
    // Matrices
    double *A, *B, *C;

    // Matrix dimensions
    int m, n, k;
    m = 2000;
    n = 200;
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

    // Compute dgemm
    cout << "BEGINNING COMPUTATION..." << endl;
    cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, m, n, k,
            alpha, A, k, B, n, beta, C, n);
    cout << "COMPLETE!" << endl;

    // Free the memory
    mkl_free(A);
    mkl_free(B);
    mkl_free(C);

    return 0;
}
