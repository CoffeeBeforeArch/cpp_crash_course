// This program initializes some variables and performs
// some arithmetic operations on them.
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare variables
  float a;
  float b;
  float sum;

  // Initialize variables
  a = 5.823;
  b = 10.123;

  // Declare and initialize in the same line
  // i will be deduced as type int
  auto i = 10;

  // Compute the sum
  sum = a + b;

  // Print string and sum
  std::cout << "Integer: " << i << '\n';
  std::cout << "The sum of " << a << " and " << b << " is " << sum << '\n';

  return 0;
}
