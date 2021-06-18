// This program shows how to use switch statements in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare and initialize variable
  int a = 1;

  // Switch statements are an alternative to if/else statements
  // We switch on a value and compare against cases
  switch (a) {
    case 1:
      std::cout << "In case 1!\n";
      // Unlike if/else, we would continue to checking case 2 w/o the break
      break;
    case 2:
      std::cout << "In case 2!\n";
      break;
    default:
      std::cout << "In default case!\n";
  }

  return 0;
}
