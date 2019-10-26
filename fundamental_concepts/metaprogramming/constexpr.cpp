// This program shows off metaprogramming in C++ using constexpr
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Constexpr fibonacci function
constexpr int fibonacci(int N) {
  if (N <= 1) {
    return 1;
  }

  return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
  // Call our constexpr function with a constexpr argument
  const int N = 5;
  const int result = fibonacci(N);

  // Print the result
  cout << "The " << N << "th fibonacci number is " << result << endl;
}
