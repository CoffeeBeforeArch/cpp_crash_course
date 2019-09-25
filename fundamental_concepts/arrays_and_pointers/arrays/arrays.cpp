// This program shows off arrays in the standard library
// By: Nick from CoffeeBeforeArch

#include <array>
#include <iostream>
#include <vector>

using std::array;
using std::cout;
using std::endl;
using std::vector;

int main() {
  // Having a unique variable for every integer would be crazy!
  // In C++, we have arrays, which are fixed-size containers for
  // elements of a designated type
  // Here, we store 3 integers in an array called "array_of_ints"
  array<int, 3> a_0;

  // Now let's initialize it!
  // Here, we access the three integers in our array by indexing
  a_0[0] = 10;
  a_0[1] = 20;
  a_0[2] = 30;
  
  // We can also initialize everything at once!
  // This is called an initializer list
  a_0 = {10, 20, 30};

  // We can also have uniform initialization at declaration time
  // This is called uniform initialization
  // Initializer lists also work here
  array<int, 3> a_1 {10, 20, 30};

  // What happens if we don't initialize everything?
  // The remainder gets zero-initialized (e.g. a_2[1] and a_2[2] are 0)
  array<int, 3> a_2 {10};
  cout << "a_2 = " << a_2[0] << " " << a_2[1] << " " << a_2[2] << endl;

  // Arrays are also nice because they do more than just store data!
  // We can get the number of elements
  cout << "a_2 size = " << a_2.size() << endl;
  // The first element
  cout << "First element of a_2 = " << a_2.front() << endl;
  // The last element
  cout << "Last element of a_2 = " << a_2.back() << endl;
  // We can fill the array with the same element
  // Array now contains all 10s
  a_2.fill(10);
  cout << "a_2 = " << a_2[0] << " " << a_2[1] << " " << a_2[2] << endl;
  
  // As a brief aside, we can look at C-style arrays, which are just
  // consecutive pieces of storage (no methods)
  // These are generally discouraged because the performance is
  // typically the exact same as std::array, and are easier to make
  // mistakes with
  int c_a[3] = {1, 2, 3};
  cout << "c_a = " << c_a[0] << " " << c_a[1] << " " << c_a[2] << endl;

  return 0;
}
