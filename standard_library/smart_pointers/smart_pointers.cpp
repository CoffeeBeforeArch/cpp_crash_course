// This program shows of smart pointers from the C++11 Standard
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <memory>

using namespace std;

int main() {
  // Create a shared pointer
  // Shared pointers are valid while at LEAST one shared pointer
  // points to the data. The last pointer frees it
  shared_ptr<int> shared_int_1(new int(5));
  shared_ptr<int> shared_int_2 = shared_int_1;

  // Print out use cout
  cout << "Use count of shared_int: " << shared_int_1.use_count() << endl;

  // Create a weak pointer
  // Weak pointers point to memory, but are not an "owner"
  // Good when we don't want an owner, or handling cyclic references
  weak_ptr<int> weak_int = shared_int_1;

  // Print out use cout
  cout << "Use count of shared_int: " << weak_int.use_count() << endl;

  // Convert the weak pointer to a shared pointer and print again
  auto shared_int_3 = weak_int.lock();
  cout << "Use count of shared_int: " << shared_int_3.use_count() << endl;

  // Destroy the memory for 2 of the shared pointers and check uniqueness
  shared_int_1.reset();
  shared_int_2.reset();
  cout << "Use count of shared_int: " << shared_int_3.use_count() << endl;
  cout << "shared_int_3 is unique?: " << shared_int_3.unique() << endl;

  // Reset the last pointer
  shared_int_3.reset();

  // Check to see if it is valid
  cout << "shared int valid?: " << shared_int_3.get() << endl;

  // Create a unique pointer
  // Unique pointers, but are the only owner of the memory it points to
  // Good for exclusive ownership
  unique_ptr<int> unique_int(new int(10));

  return 0;
}
