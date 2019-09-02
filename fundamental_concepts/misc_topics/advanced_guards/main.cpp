// This program shows how to handle duplicate definitions using header
// guards
// By: Nick from CoffeeBeforeArch
#include <iostream>
#include "square.h"

// Prototype for cube function
int cube(int a);

using namespace std;

int main() {
  // Compute the square of some number "N"
  int N = 3;
  cout << "The square of " << N << " is " << square(N) << endl;

  // Compute the cube of some number "N"
  cout << "The cube of " << N << " is " << cube(N) << endl;

  return 0;
}
