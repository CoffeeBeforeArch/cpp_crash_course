// This program shows off C++ for loops by doing multiplication using
// successive addition.
// By: Nick from CoffeeBeforeArch

#include <array>
#include <iostream>

int main() {
  // Declare and initialize an array
  std::array<int, 5> a1{0, 1, 2, 3, 4};

  // Range-based for loops allow us to easily access all elements in an
  // array without having to worry about indexing (we can't use this on c-style
  // arrays)
  // This for loop can be interpreted as:
  //  For each element "i" in a1, print "i"
  // We can use the auto keyword as well, and let the compiler determine what
  // type "i" should be
  std::cout << "Range-Based\n";
  for (auto i : a1) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  // We can also use iterators
  // Iterators are a special type of object that can be used to access STL
  // containers. We can iterate through them, and dereference them to access
  // their values. Safe and intuitive (we don't have to reason about and index,
  // just "begin" and "end"!).
  std::cout << "Iterators\n";
  // We could also use a1.begin() and a1.end()
  // "begin" points to the first element, and "end" points to 1 past the last
  // element.
  for (auto it = begin(a1); it < end(a1); it++) {
    std::cout << *it << " ";
  }
  std::cout << '\n';

  // We can use reverse iterators to print the array backwards
  // Still intuitive, we just now use "rbegin" and "rend"
  std::cout << "Reverse-Iterators\n";
  // We could also use a1.rbegin() and a1.rend()
  // "rbegin" points to the last element, and "end" points to 1 before the first
  // element.
  for (auto it = rbegin(a1); it < rend(a1); it++) {
    std::cout << *it << " ";
  }
  std::cout << '\n';

  // We can also do more c-style loops by using the size in our range check
  std::cout << "Explicit size comparison\n";
  for (auto i = 0u; i < a1.size(); i++) {
    std::cout << a1[i] << " ";
  }
  std::cout << '\n';

  // When looping over a c-style array, it's slightly different...
  // We have to externally keep track of the array size, which can lead to
  // errors
  std::cout << "C-Style for loop\n";
  int c_a[] = {0, 1, 2, 3, 4};
  for(auto i : c_a) {
    std::cout << i << '\n';
  }
  std::cout << '\n';

  return 0;
}
