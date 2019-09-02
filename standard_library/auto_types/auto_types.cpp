// This program shows off the auto type in C++11
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

// Simple function to show off using auto with return types
double multiply(double a, double b) { return a * b; }

int main() {
  // Use auto when we do direct assignment
  auto integer = 42;
  cout << "integer is of type " << typeid(integer).name() << endl;

  // Use auto with a return type of a function
  auto double_precision = multiply(1.4, 2.7);
  cout << "double_precision is of type " << typeid(double_precision).name()
       << endl;

  // Use auto on a more complex data type
  vector<int> int_vec;
  auto iterator = int_vec.begin();
  cout << "iterator is of type " << typeid(iterator).name() << endl;

  return 0;
}
