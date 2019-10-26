// This program has recursive implementations of fibonacci and factorial
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Calculates the factorial of a given integer
// e.g. 5! = 5 * 4 * 3 * 2 * 1 = 120
int factorial(int N) {
  // Nice way to print the function signature and value
  cout << __PRETTY_FUNCTION__ << ", " << N << endl;

  // Base case (stop recursion)
  if (N <= 1) {
    return 1;
  }

  // Keep calling the function recursively
  // Based on the idea that 5! = 5 * 4!
  return (N * factorial(N - 1));
}

// Print the nth digit the fibonacci sequence (assume positive number)
// e.g. for n = 5, fibonacci(5) = (n-1 + n-2) = 3 + 2 = 5
int fibonacci(int N) {
  // Nice way to print the function signature and value
  cout << __PRETTY_FUNCTION__ << ", " << N << endl;

  // Base case
  if (N <= 1) {
    return N;
  }

  // Keey calling the function recursively
  // Based on the idea that fib(i) = fib(i - 1) + fib(i - 2)
  return (fibonacci(N - 1) + fibonacci(N - 2));
}

int main() {
  // Run factorial and fibonacci for N = 5
  const int N = 5;
  const int r_fac = factorial(N);
  const int r_fib = fibonacci(N);

  // Print results
  cout << N << "! = " << r_fac << endl;
  cout << "The " << N << "th fibonacci number is " << r_fib << endl;

  return 0;
}
