// This program shows how to use the ternery operator in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare and initialize some values
  int a = 5;
  int b = 10;

  // Use the ternery operator to initialize C
  // First evaluates "a > b"
  //  if True, initializes c to a
  //  if False, initializes c to b
  int c = a > b ? a : b;

  // Print out the result
  std::cout << "The value of c is: " << c << '\n';

  return 0;
}
