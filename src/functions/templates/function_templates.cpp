// This program shows off overloaded functions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// Prints the value of an integer and it's size, and increments the value
template <typename T>
auto print_and_inc(T i) {
  std::cout << "Value: " << i << ", S: " << sizeof(i) << '\n';
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
  std::cout << "New int value " << i << '\n';
  std::cout << "New float value " << sp << '\n';
  std::cout << "New double value " << dp << '\n';

  return 0;
}
