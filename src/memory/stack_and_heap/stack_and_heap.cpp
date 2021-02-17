// This program covers the basics of the stack and heap in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// A simple function that returns a pointer to a stack variable
int *bad_return() {
  // Lifetime of this variable memory only until the end of the function!
  int a = 5;
  std::cout << "Address of a: " << &a << '\n';
  return &a;
}

// A simple function a pointer to a variable on the heap
int *good_return() {
  // The lifetime of the memory is until we deallocate it!
  int *a = new int;
  std::cout << "Address of a: " << a << '\n';
  *a = 5;
  return a;
}

int main() {
  // Let's get a pointer from two different functions
  int *bad = bad_return();
  int *good = good_return();

  // When we derefernce one of these, our program (usually) crashes
  // That is because we're accessing memory that has gone out of scope!
  // cout << "Address of bad: " << bad << " Value: " << *bad << '\n';
  std::cout << "Address of good: " << good << " Value: " << *good << '\n';

  // We can use delete to free out dynamically allocated memory
  delete good;

  return 0;
}
