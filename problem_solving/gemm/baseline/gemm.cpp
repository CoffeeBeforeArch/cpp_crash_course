// This program implements a baseline matrix multiplicaiton function in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <random>
#include <vector>

// Typedef that determines the type of matrix multiplication we do
typedef int dtype;

// Templated GEMM
// Performs MxN = MxK * KxN
template <typename T>
void gemm(const std::vector<T> &a, const std::vector<T> &b, std::vector<T> &c,
          const unsigned M, const unsigned N, const unsigned K) {
  // For every row...
  for (auto row = 0u; row < M; row++) {
    // For every col...
    for (auto col = 0u; col < N; col++) {
      // For every element in the row-col pair...
      T tmp = 0;
      for (auto i = 0u; i < K; i++) {
        // Accumulate product pairs
        tmp += a[row * K + i] * b[i * N + col];
      }

      // Write back the result
      c[row * N + col] = tmp;
    }
  }
}

int main() {
  // Set the matrix dimensions
  unsigned M = 1 << 6;
  unsigned N = 1 << 7;
  unsigned K = 1 << 8;

  // Allocate memory in vectors
  std::vector<dtype> a(M * K);
  std::vector<dtype> b(K * N);
  std::vector<dtype> c(M * N);

  // Set up our random number generator
  std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<int> dist(0, 255);

  // Generate our random inputs
  std::generate(begin(a), end(a), [&]() { return dist(rng); });
  std::generate(begin(b), end(b), [&]() { return dist(rng); });

  // Perform matrix multiplication
  gemm(a, b, c, M, N, K);

  return 0;
}
