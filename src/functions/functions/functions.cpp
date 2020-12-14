// This program shows off built in and user defined functions to print
// the size of different data types and return different values.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

// Prints the value of an integer and it's size, and increments the value
int print_and_inc_int(int i) {
  cout << "Value: " << i << ", S: " << sizeof(i) << '\n';
  return i + 1;
}

// Prints the value of a float and it's size, and increments the value
float print_and_inc_float(float sp) {
  cout << "Value: " << sp << ", S: " << sizeof(sp) << '\n';
  return sp + 1;
}

// Prints the value of a double and it's size, and increments the value
double print_and_inc_double(double dp) {
  cout << "Value: " << dp << ", S: " << sizeof(dp) << '\n';
  return dp + 1;
}

int main() {
  // Declare and initialize variables
  int i = 4362;
  float sp = 20.123;
  double dp = 194.421;

  // Call our functions
  // Return value overwrites our input argument (e.g. i becomes i + 1, returned
  // from the function "print_and_inc_int(i)")
  i = print_and_inc_int(i);
  sp = print_and_inc_float(sp);
  dp = print_and_inc_double(dp);

  // Print out the returned values
  cout << "New int value " << i << '\n';
  cout << "New float value " << sp << '\n';
  cout << "New double value " << dp << '\n';

  return 0;
}
