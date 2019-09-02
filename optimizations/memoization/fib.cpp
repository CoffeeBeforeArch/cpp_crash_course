// This program shows the basics of memoization in C++ using fibonacci
// as an example
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Global for tracking calls
int calls;

// Baseline fibonacci
int fibonacci(int N) {
  // Increment calls
  calls++;

  // Base case for recursion
  if (N <= 1) {
    return N;
  }

  return fibonacci(N - 1) + fibonacci(N - 2);
}

// Fibonacci using memoization
int fibonacci(int N, int *tmp) {
  // Increment calls
  calls++;

  // Base case of recursion
  if (N <= 1) {
    return N;
  }

  // Use cached value instead of re-calculating
  if (tmp[N] != 0) {
    return tmp[N];
  }

  // Store the value in our tmp array
  tmp[N] = fibonacci(N - 1, tmp) + fibonacci(N - 2, tmp);
  return tmp[N];
}

// Helper function to call the baseline function
int callBase(int N) { return fibonacci(N); }

// Helper function to call the memoization function
int callMemo(int N) {
  // Create an array for caching results
  // Use N + 1 to avoid 0 indexing
  int *tmp = new int[N + 1];
  for (int i = 0; i < N + 1; i++) {
    tmp[i] = 0;
  }

  // Call our better version
  int result = fibonacci(N, tmp);
  delete[] tmp;
  return result;
}

int main() {
  // Set the number of calls = 0
  calls = 0;

  // Set the problem size
  int N = 6;

  // Use one of our implementations
  int result = callBase(N);
  // int result = callMemo(N);

  // Print the result
  cout << "Fibonacci of " << N << " is " << result << endl;
  cout << "Number of calls = " << calls << endl;

  return 0;
}
