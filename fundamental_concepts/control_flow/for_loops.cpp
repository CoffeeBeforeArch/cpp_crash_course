// This program shows off C++ for loops by doing multiplication using
// successive addition.
// By: Nick from CoffeeBeforeArch

#include <array>
#include <iostream>
#include <vector>

using std::array;
using std::cout;
using std::endl;
using std::vector;

int main() {
  // Declare and initialize an array
  array<int, 5> a1{0, 1, 2, 3, 4};

  // Range-based for loops allow us to easily access all elements in an
  // array without having to worry about indexing (we can't use this on c-style
  // arrays)
  // This for loop can be interpreted as:
  //  For each element "i" in a1, print "i"
  // We can use the auto keyword as well, and let the compiler determine what
  // type "i" should be
  cout << "Range-Based" << endl;
  for (auto i : a1) {
    cout << i << endl;
  }
  cout << endl;

  // We can also use iterators
  cout << "Iterators" << endl;
  for (auto it = begin(a1); it < end(a1); it++) {
    cout << *it << endl;
  }
  cout << endl;

  // We can use reverse iterators to print the array backwards
  cout << "Reverse-Iterators" << endl;
  for (auto it = rbegin(a1); it < rend(a1); it++) {
    cout << *it << endl;
  }
  cout << endl;

  // We can also do more c-style loops
  cout << "Explicit size comparison" << endl;
  for (auto i = 0u; i < a1.size(); i++) {
    cout << a1[i] << " ";
  }
  cout << endl;

  // When looping over a c-style array, it's slightly different
  // We have to externally keep track of the array size
  int N = 5;
  int c_a[] = {0, 1, 2, 3, 4};
  for (int i = 0; i < N; i++) {
    cout << c_a[i] << endl;
  }
  return 0;
}
