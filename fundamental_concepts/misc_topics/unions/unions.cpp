// This program shows off the basics of unions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Simple struct definition that contains 4 different data types
struct various_data {
  // 1 Byte
  char a;
  // 4 Bytes
  int b;
  // 4 Bytes
  float c;
  // 8 Bytes
  double d;
};

// Create a simple Union
// Looks like a struct, but there is only ever 1 valid field at a time
union union_test {
  various_data union_struct;
  int union_int;
  float union_float;
  double union_double;
};

int main() {
  // Create a struct and initialze it
  various_data v_data;
  v_data.a = 'a';
  v_data.b = 24;
  v_data.c = 867.5309;
  v_data.d = 2001.1002;

  // Print out the size of a struct
  cout << "sizeof struct: " << sizeof(various_data) << endl;

  // Create a union, and assign a field
  union_test ut_1;
  ut_1.union_struct = v_data;

  // Print out the size of the union
  cout << "sizeof union: " << sizeof(ut_1) << endl;

  // Print out the address of the union, and of the field
  cout << "Union pointer: " << &ut_1
       << ", Field pointer: " << &(ut_1.union_struct) << endl;

  // Re-assign the union to contain an integer now
  int b = 5;
  ut_1.union_int = b;

  // Print size of the union and pointers again
  cout << "sizeof union: " << sizeof(ut_1) << endl;
  cout << "Union pointer: " << &ut_1 << ", Field pointer: " << &(ut_1.union_int)
       << endl;

  return 0;
}
