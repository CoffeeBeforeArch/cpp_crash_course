// This program calls functions from a user-made library
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "example_lib.h"

using namespace std;

int main() {
  // Declare and initialize variables;
  int a = 5;
  int result_square;
  int b = 2;
  int result_cube;

  // Call externally defined functions
  result_square = square(a);
  result_cube = cube(b);

  // Print results
  cout << a << " squared = " << result_square << endl;
  cout << b << " cubed = " << result_cube << endl;

  return 0;
}
