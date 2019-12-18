// This program covers the fundamentals of scoping and memory in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

// This is illegal, because 'a' is on the stack, and goes out of scope
// when the function returns
int *bad_return() {
  int a = 5;
  cout << "Address of a: " << &a << '\n';
  return &a;
}

// This is fine, because we are allocating space on the heap
// Heap memory is valid until we free it!
int *good_return() {
  int *a = new int;
  cout << "Address of a: " << a << '\n';
  *a = 5;
  return a;
}

int main() {
  // When we talk about scope, we talk about where it is valid to access
  // something
  // For example, if we define a variable inside of an if statement, it is only
  // valid inside the if statement!
  if (true) {
    int x = 5;
    cout << "The value of x is: " << x << '\n';
  }

  // This is illegal!
  // cout << "The value of x is: " << x << '\n';

  // Here we fetch two pointers from two functions
  // When we call a function we create a new stack frame.
  // These are where our where local variables are allocated
  // The stack frame is popped off the stack when a function returns
  // That's why it's UB to access the bad pointer!
  int *bad = bad_return();
  int *good = good_return();

  // Derefernce our pointers
  // Reminder, dereferencing the bad pointer will likely cause a segfault
  //cout << "Address of bad: " << bad << " Value: " << *bad << '\n';
  cout << "Address of good: " << good << " Value: " << *good << '\n';

  // One thing we have to make sure of is freeing our heap allocated memory
  // As we just showed, it doesn't get freed automatically!
  delete good;

  return 0;
}
