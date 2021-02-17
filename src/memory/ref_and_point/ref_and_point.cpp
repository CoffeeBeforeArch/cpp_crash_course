// This program shows off references and pointers in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // When we declare a variable, we're asking for some memory
  int a = 5;

  // We may want two variables that refer to the same piece of memory
  // This is called aliasing, and we can do this with references
  // Here, we are saying we want 'b' to refer to a
  int &b = a;

  // We can show they both refer to the same piece of memory by printing their
  // addresses
  std::cout << "a: value: " << a << ", address " << &a << '\n';
  std::cout << "b: value: " << b << ", address " << &b << '\n';

  // Updating either of these variables will change what is stored at their
  // common address
  a = 10;

  // Print values and addresses
  std::cout << "a: value: " << a << ", address " << &a << '\n';
  std::cout << "b: value: " << b << ", address " << &b << '\n';

  // Pointers are varaibles that hold an address
  // In most cases, we prefer references to pointers
  // Here, we're storing the address of 'a', in the variable 'c'
  int *c = &a;

  // Print the value and address
  // Notice the value is the address of 'a', and the address is someplace new
  std::cout << "c: value: " << c << ", address " << &c << '\n';

  // To access the data, we dereference the pointer
  std::cout << "Data at address " << c << " = " << *c << '\n';

  return 0;
}
