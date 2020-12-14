// This program shows off the basics of smart pointers in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <memory>

int main() {
  // Here we make a unique pointer
  // The lifetime of the dynamic allocation is now tied to unique_ptr objecti
  std::unique_ptr<int> p1(new int);

  // We can use it just like a normal pointer
  *p1 = 10;
  std::cout << *p1 << '\n';

  // No leakes! Memory will be freed in the destructor
  return 0;
}
