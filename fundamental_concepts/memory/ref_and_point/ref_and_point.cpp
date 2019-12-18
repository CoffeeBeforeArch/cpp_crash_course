// This program shows off references and pointers in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

int main() {
  // When we declare a variable, we're asking for some memory
  int a = 5;

  // We may want two variables that refer to the same piece of memory
  // This is called aliasing, and we can do this with references
  // Here, we are saying we want 'b' to refer to a
  int &b = a;

  // We can show they both refer to the same piece of memory by printing their
  // addresses
  cout << "a: value: " << a << ", address " << &a << endl;
  cout << "b: value: " << b << ", address " << &b << endl;

  // Updating either of these variables will change what is stored at their
  // common address
  a = 10;

  // Print values and addresses
  cout << "a: value: " << a << ", address " << &a << endl;
  cout << "b: value: " << b << ", address " << &b << endl;

  // Pointers are varaibles that hold an address
  // In most cases, we prefer references to pointers
  // Here, we're storing the address of 'a', in the variable 'c'
  int *c = &a;

  // Print the value and address
  // Notice the value is the address of 'a', and the address is someplace new
  cout << "c: value: " << c << ", address " << &c << endl;

  // To access the data, we dereference the pointer
  cout << "Data at address " << c << " = " << *c << endl;

  return 0;
}
