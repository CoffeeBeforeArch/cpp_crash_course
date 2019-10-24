// This program shows off overloaded functions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;
using std::endl;

// Prints the value of an integer and it's size, and increments the value
template <typename T>
auto print_and_inc(T i) {
  cout << "Value: " << i << ", S: " << sizeof(i) << endl;
  return i + 1;
}

int main() {
  // Declare and initialize variables
  auto i = 4362;
  auto sp = 20.123f;
  auto dp = 194.421;

  // Call our overloaded functions
  // Functions can be the same name as long as the signatures are different (the
  // compiler can still tell them apart).
  i = print_and_inc(i);
  sp = print_and_inc(sp);
  dp = print_and_inc(dp);

  // Print out the returned values
  cout << "New int value " << i << endl;
  cout << "New float value " << sp << endl;
  cout << "New double value " << dp << endl;

  return 0;
}
