// This program covers the fundamentals of scoping and memory in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using namespace std;

// "x" is only valid in the scope of this function!
// Returning a pointer would give us a pointer to something
// that is no longer guaranteed to us!
int *getPtrBad() {
  // This is allocated on the stack (local variables)
  int x = 5;
  return &x;
}

// The memory location of "x" will be valid until WE de-allocate it
int *getPtrGood() {
  // New allocates memory the size of an int in this case, and
  // returns a pointer to that memory
  // This is allocated on the heap (dynamic allocation)
  int *x = new int;
  *x = 5;
  return x;
}

int main() {
  // The variable "x" is only valid within the if statement
  if (true) {
    int x = 5;
  }
  // After this point, the memory used to store "x" can be (almost)
  // any value

  // Incorrect way to generate a pointer to a number
  int *p1 = getPtrBad();

  // Correct way to generate a pointer to a number
  int *p2 = getPtrGood();

  // Print both pointers
  // Printing the local one is undefined behavior (uncomment could
  // lead to a segmentation fault!)
  // cout << "Address: " << p1 << " Value: " << *p1 << endl;
  cout << "Address: " << p2 << " Value: " << *p2 << endl;

  // If we're done with heap allocated memory, get rid of it
  delete p2;

  // Use a vector to store all the pointers
  vector<int *> old_pointers;

  // Let's look at an example of why we should free memory
  // Overwrite a pointer 5 times, and then de-allocate the last using delete
  // Problem? The first 4 still are allocated!
  for (int i = 0; i < 5; i++) {
    p2 = getPtrGood();
    old_pointers.push_back(p2);
  }
  delete p2;

  // Print all the pointers that are still valid
  // Printing the deleted one is undefined behavior (could lead to a
  // segmentation fault, so do size() - 1)
  for (int i = 0; i < old_pointers.size() - 1; i++) {
    cout << "Address: " << old_pointers[i] << " Value: " << *old_pointers[i]
         << endl;
  }

  // New can be used on any data type. This includes classes and
  // arrays. This array must manually be de-allocated.
  int *array = new int[100];

  // De-allocation does not need to be one at a time...
  delete[] array;

  return 0;
}
