// This program shows how to use fold expression in C++17
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// We've seen variadic templates before, but now we don't
// have to do the unpacking...
template <typename... Args>
void prints(Args... args) {
  // Of the form: (init op ... op pack)
  // Expands to: ((init op pack1) op pack2...)op packN
  (cout << ... << args) << endl;
}

// We can do it to reduce something like a sum to a single line!
template <typename... Args>
auto sum(Args... args) {
  // Of the form: (... op pack)
  // Expands to: ((pack1 op pack2) op ...) op packN
  return (args + ...);

  // This is equivilant (but 0 can be any number)
  // return (args + ... + 0);
}

int main() {
  // Use our simple prints variadic template w/ folding
  prints(1, " hello ", 3.14);

  // Use our simple sum variadic template with folding
  prints(sum(1, 2, 3, 4, 5));

  return 0;
}
