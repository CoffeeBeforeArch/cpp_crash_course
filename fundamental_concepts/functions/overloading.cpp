// This program shows off overloaded functions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Prints the value of an integer and it's size, and increments the value
int print_and_inc(int i) {
  cout << "Value: " << i << ", S: " << sizeof(i) << endl;
  return i + 1;
}

// Prints the value of a float and it's size, and increments the value
float print_and_inc(float sp) {
  cout << "Value: " << sp << ", S: " << sizeof(sp) << endl;
  return sp + 1;
}

// Prints the value of a double and it's size, and increments the value
double print_and_inc(double dp) {
  cout << "Value: " << dp << ", S: " << sizeof(dp) << endl;
  return dp + 1;
}

int main() {
  // Declare and initialize variables
  int i = 4362;
  float sp = 20.123;
  double dp = 194.421;

  // Call our overloaded functions
  // Functions can be the same name as long as the signatures are different (the
  // compiler can still tell them apart).
  i = print_and_inc(i);
  sp = print_and_inc(sp);
  dp = print_and_inc(dp);

  // Print out the returned values
  cout << "New int value " << i << endl;
  cout << "New float value " << sp << endl;
  cout << "New double value " << dp << endl;

  return 0;
}
