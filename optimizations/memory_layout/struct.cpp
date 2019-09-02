// This program shows the importance of laying out structs in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Member order matters!
// Members here are aligned based on word size (64-bit on my machine)
struct bad_struct {
  // ID and weight for the first product
  int id_1;
  double weight_1;

  // ID and weight for the second product
  int id_2;
  double weight_2;
};

// Much better!
// Now both the ints will be packed together
struct good_struct {
  // IDs for the products
  int id_1;
  int id_2;

  // Weights for the products
  double weight_1;
  double weight_2;
};

// Now what happens when we tell the compiler to pack these values?
// Depends! We could have un-aligned accesses depending on what is
// in our struct!
struct potentially_unsafe_struct {
  // IDs for the products
  char id_1;
  char id_2;

  // Weights for the products
  double weight_1;
  double weight_2;
} __attribute__((packed));

int main() {
  // Create an instance of the three structs
  bad_struct A;
  good_struct B;
  potentially_unsafe_struct C;

  // Print the size of the three structs
  cout << "Size of bad struct size = " << sizeof(A) << endl;
  cout << "Size of good struct size = " << sizeof(B) << endl;
  cout << "Potentially unsafe struct size = " << sizeof(C) << endl;

  return 0;
}
