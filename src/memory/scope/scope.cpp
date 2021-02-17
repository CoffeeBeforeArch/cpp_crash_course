// This program covers the fundamentals of scope in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// Integer at global scope
// This can be accessed anywhere!
int x = 15;

void printX() {
  // This variable x is valid for this function call only
  int x = 0;
  std::cout << "The value of x in the scope of the function: " << x << '\n';
}

int main() {
  // When we talk about scope, we talk about where it is valid to access
  // something
  // This variable x is valid for the rest of the main function
  int x = 10;
  std::cout << "The value of x in the main function scope is: " << x << '\n';

  // However, we can have nested scopes
  if (true) {
    // This is a new integer x that can be accessed only in the if statement
    int x = 5;
    std::cout << "The value of x in the nested scope is: " << x << '\n';
  }

  // Call our function that also has an integer x
  printX();

  // We can access the global variable using the scope resolution operator
  std::cout << "The value of x from the global scope: " << ::x << '\n';

  return 0;
}
