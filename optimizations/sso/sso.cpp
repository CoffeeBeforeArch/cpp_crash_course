// This program implements a set of benchmarks to show off the short
// string optimization in C++
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Overload new operator to track heap allocations
void* operator new(size_t n) {
  cout << "Allocating " << n << " bytes" << endl;
  return malloc(n);
}

int main() {
  // First, let's see how big a string is
  size_t string_size = sizeof(string);
  cout << "Size of string = " << string_size << endl;

  // Gradually increase the size of the string in the loop
  for (size_t i = 0; i < string_size; i++) {
    string s(i, 'X');
    std::cout << i << ": " << s << std::endl;
  }

  return 0;
}
