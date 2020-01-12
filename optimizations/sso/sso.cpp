// This program implements a set of benchmarks to show off the short
// string optimization in C++
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <iostream>
#include <string>

// Overload new operator to track heap allocations
void* operator new(size_t n) {
  std::cout << "Allocating " << n << " bytes\n";
  return malloc(n);
}

int main() {
  // First, let's see how big a string is
  size_t string_size = sizeof(std::string);
  std::cout << "Size of string = " << string_size << '\n';

  // Gradually increase the size of the string in the loop
  for (size_t i = 0; i < 32; i++) {
    std::string s(i, 'X');
    std::cout << i << ": " << s << '\n';
  }

  return 0;
}
