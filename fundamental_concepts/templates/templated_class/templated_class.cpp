// This program shows of templated classes in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

using std::cout;

int main() {
  // Initialize a new point object using integers
  Point<int> p1(1, 2);

  // Initialize a new point object using floats
  Point<float> p2(0.54, 1.92);

  // Print out integers from p1
  cout << "P1 X = " << p1.getX() << '\n';
  cout << "P1 Y = " << p1.getY() << '\n';

  // Print out floats from p2
  cout << "P2 X = " << p2.getX() << '\n';
  cout << "P2 Y = " << p2.getY() << '\n';

  return 0;
}
