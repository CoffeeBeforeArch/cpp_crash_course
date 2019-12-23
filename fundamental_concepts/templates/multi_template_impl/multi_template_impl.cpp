// This program shows how to have different implementations of a C++
// Class using a single template
// By: Nick from CoffeeBeforeArch

#include <cctype>
#include <iostream>

#include "interface.h"

using std::cout;

int main() {
  // Make an integer container using the standard template
  Container<int> int_container(1);

  // Make a char container using the special implementation
  Container<char> char_container('a');

  // Call method from standard template
  cout << "Increment from original template " << int_container.inc() << '\n';

  // Call method from special implementation
  cout << "Uppercase from original template " << char_container.uppercase()
       << '\n';

  return 0;
}
