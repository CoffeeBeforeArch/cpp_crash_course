// This program shows off nested control flow in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main() {
  // Declare and initialize variables
  int multiplicand = 5;
  int multiplier = 10;
  int product = 0;

  // Compute 5 * 10 using addition
  cout << "Before loop. Product = " << product << endl;
  for (int i = 0; i < multiplier; i++) {
    product += multiplicand;
    // Print out the 5th iteration
    if (i == 4) {
      cout << "Iteration " << i << ": Product = " << product << endl;
    } else {
      // Immediatly proceed to next iteration
      continue;
    }
    cout << "This is printed only on iteration " << i << endl;
  }
  cout << "Product = " << product << endl;

  return 0;
}
