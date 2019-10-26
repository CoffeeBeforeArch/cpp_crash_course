// This program shows off a simple use of template metaprogramming in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Template with an integer template parameter
template <int N>
int fibonacci() {
  return fibonacci<N - 1>() + fibonacci<N - 2>();
}

// Specialization for base case 1
template <>
int fibonacci<1>() {
  return 1;
}

// Specialization for base case 0
template <>
int fibonacci<0>() {
  return 1;
}

int main() {
  // Compute fibonacci at compile time
  const int N = 5;
  const int result = fibonacci<N>();

  // Print the result at runtime
  cout << "The " << N << "th fibonacci number is " << result << endl;

  return 0;
}
