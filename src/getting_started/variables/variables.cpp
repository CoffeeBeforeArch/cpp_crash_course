// This program initializes some variables and performs
// some arithmetic operations on them.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

int main() {
  // Declare variables
  float a;
  float b;
  float sum;

  // Initialize variables
  a = 5.823;
  b = 10.123;

  // Declare and initialize in the same line
  auto i = 10;

  // Compute the sum
  sum = a + b;

  // Print string and sum
  cout << "Integer: " << i << '\n';
  cout << "The sum of " << a << " and " << b << " is " << sum << '\n';

  return 0;
}
