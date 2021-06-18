// This program shows off automatic type deduction in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare and initialize our variables
  // Allow the compiler to deduce the type
  auto a = 5;
  auto b = 10;

  // Compute the sum
  auto sum = a + b;

  // Print the sum
  std::cout << "The sum of " << a << " and " << b << " is " << sum << '\n';

  return 0;
}
