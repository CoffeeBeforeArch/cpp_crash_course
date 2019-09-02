// This program shows off two functions for multiplication that use pass
// by value and pass by reference respectively
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Pass by value multiplication function that prints results
void multiply_pbv(int a, int b, int p) {
  p = a * b;
  cout << "Pass by value product = " << p << endl;
}

// Pass by reference multiplication function that prints results
void multiply_pbr(int &a, int &b, int &p) {
  p = a * b;
  cout << "Pass by reference product = " << p << endl;
}

int main() {
  // Declare and initialize variables
  int multiplier = 5;
  int multiplicand = 10;
  int product = 0;

  // Call pass by value implementation
  multiply_pbv(multiplier, multiplicand, product);

  // Print out product again (no change!)
  cout << "Main function product is " << product << endl;

  // Call pass by reference (product is updated!)
  multiply_pbr(multiplier, multiplicand, product);

  // Print out product again
  cout << "Main function product is " << product << endl;

  return 0;
}
