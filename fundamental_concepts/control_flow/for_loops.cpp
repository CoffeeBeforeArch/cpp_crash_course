// This program shows off C++ for loops by doing multiplication using
// successive addition.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main() {
  // Declare and initialize variable
  int multiplicand = 5;
  int multiplier = 10;
  int product = 0;

  // Compute product of 5 * 10 using addition
  cout << "Before loop. Product = " << product << endl;
  for (int i = 0; i < multiplier; i++) {
    product += multiplicand;
    cout << "Iteration " << i << ": Product = " << product << endl;
  }

  return 0;
}
