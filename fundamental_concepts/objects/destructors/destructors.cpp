// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>

using std::cout;
using std::endl;

// Our class from last example
class Array {
 private:
  int *data;
  int size;

 public:
  // Our constructor, and default constructor
  Array(int N);
  Array() = delete;

  // Our destructor!
  // Specifies what happens when we destroy an object
  ~Array();

  // Get the size of our array
  size_t get_size() { return size; }

  // Get an element at a position
  // Fails if the index is out of bounds
  int at(int index) {
    if (index < size) {
      return data[index];
    } else {
      assert(0);
    }
  }
};

// Our constructor where we allocate memory
Array::Array(int N) {
  cout << "Allocating memory in constructor!\n";
  data = new int[N];
  size = N;
}

// Destructors have the name as the class they belong to, but use a tilde (~)
// They get called when an object goes out of scope, or when they are manually
// deleted
Array::~Array() {
  cout << "Freeing our allocated memory in destructor!\n";
  delete[] data;
}

int main() {
  // Create an array with 10 elements
  Array a1(10);
  return 0;
}
