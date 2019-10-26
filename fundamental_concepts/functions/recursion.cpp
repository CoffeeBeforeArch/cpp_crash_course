// This program has recursive implementations of fibonacci and factorial
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Calculate factorial (assume positive number)
// e.g. 5! = 5 * 4 * 3 * 2 * 1 = 120
int factorial(int n) {
  // Nice way to print the function signature and value
  cout << __PRETTY_FUNCTION__ << ", " << n << endl;

  // Base case
  if (n <= 1) {
    return 1;
  }

  // Keep calling the function recursively
  return (n * factorial(n - 1));
}

// Print the nth digit the fibonacci sequence (assume positive number)
// e.g. for n = 5, fibonacci(5) = (n-1 + n-2) = 3 + 2 = 5
int fibonacci(int n) {
  // Nice way to print the function signature and value
  cout << __PRETTY_FUNCTION__ << ", " << n << endl;

  // Base case
  if (n <= 1) {
    return n;
  }

  // Keey calling the function recursively
  return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
  // Initialize and delcare number of iterations
  const int N = 5;
  const int r_fac = factorial(N);
  const int r_fib = fibonacci(N);

  // Print results
  cout << N << "! = " << r_fac << endl;
  cout << "The " << N << "th fibonacci number is " << r_fib << endl;

  return 0;
}
