// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>

using std::cout;

// Our class from last example
class IntArray {
 private:
  int *data;
  int size;

 public:
  // Our constructor, default constructor, and and copy constructor
  IntArray(int N);
  IntArray() = delete;
  IntArray(const IntArray &a) = default;

  // Our destructor!
  // Specifies what happens when we destroy an object
  ~IntArray();

  // Get the size of our array
  int get_size() { return size; }
  int *get_data() { return data; }
  // Set all the elements in our array
  void set(const int val) {
    for (int i = 0; i < size; i++) {
      data[i] = val;
    }
  }

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
IntArray::IntArray(int N) {
  // Memory is also value initialized
  cout << "Allocating memory in constructor!\n";
  data = new int[N]();
  size = N;
}

// Destructors have the name as the class they belong to, but use a tilde (~)
// They get called when an object goes out of scope, or when they are manually
// deleted
IntArray::~IntArray() {
  cout << "Freeing our allocated memory in destructor!\n";
  delete[] data;
}

int main() {
  // Create an array with 10 elements
  IntArray a1(10);
  a1.set(5);

  // Use the copy constructor
  IntArray a2 = a1;

  // We just copied the pointer!
  // This is known as a shallow copy, and can be dangerous if we de-allocate
  cout << "a1's pointer: " << a1.get_data()
       << " a2's pointer: " << a2.get_data() << '\n';

  return 0;
}
