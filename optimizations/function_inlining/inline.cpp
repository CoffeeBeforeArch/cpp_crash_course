// This program shows off the basics of function inlining in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Function for adding "a" and "b"
int add(int a, int b) { return a + b; }

int main() {
  // Add "a" and "b" together with a function
  int a = 16;
  int b = 16;
  int sum = add(a, b);

  // Print the result
  cout << a << " + " << b << " = " << sum << endl;

  return 0;
}
