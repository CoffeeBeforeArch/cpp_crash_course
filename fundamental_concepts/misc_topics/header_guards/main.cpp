// This program shows how to handle duplicate definitions using header
// guards
// By: Nick from CoffeeBeforeArch
#include <iostream>
#include "cube.h"
#include "square.h"

using std::cout;

int main() {
  // Compute the square of some number "N"
  int N = 3;
  cout << "The square of " << N << " is " << square(N) << '\n';

  // Compute the cube of some number "N"
  cout << "The cube of " << N << " is " << cube(N) << '\n';

  return 0;
}
