// This program shows off nested control flow in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

int main() {
  // Declare and initialize variables
  int multiplicand = 5;
  int multiplier = 10;
  int product = 0;

  // Compute 5 * 10 using addition
  cout << "Before loop. Product = " << product << '\n';
  for (int i = 0; i < multiplier; i++) {
    product += multiplicand;
    // Print out the 5th iteration
    if (i == 4) {
      cout << "Iteration " << i << ": Product = " << product << '\n';
    } else {
      // Immediatly proceed to next iteration
      continue;
    }
    cout << "This is printed only on iteration " << i << '\n';
  }
  cout << "Product = " << product << '\n';

  return 0;
}
