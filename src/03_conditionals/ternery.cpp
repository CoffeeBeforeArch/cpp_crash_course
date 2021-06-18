// This program shows how to use the ternery operator in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare and initialize some values
  int a = 5;
  int b = 10;

  // Use the ternery operator to initialize C
  int c = a > b ? 1 : 0;

  // Print out the result
  std::cout << "The value of c is: " << c << '\n';

  return 0;
}
