// This program shows how to chain if and else statements in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

int main() {
  // Declare and initialize variable
  int a = 5;

  // And we can chain multiple if-else statements together
  if (a == 1) {
    std::cout << "Value is 1!\n";
  } else if (a == 2) {
    std::cout << "Value is 2!\n";
  } else if (a == 3) {
    std::cout << "Value is 3!\n";
  } else {
    std::cout << "Default case!\n";
  }

  return 0;
}
