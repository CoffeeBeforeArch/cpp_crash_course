// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>

using std::cout;

// Our class from last example
class IntArray {
 private:
  int *data = nullptr;
  int size = 0;

 public:
  // Our constructor, default constructor, and and copy constructor
  IntArray(int N);
  IntArray() = delete;
  IntArray(const IntArray &a);

  // Our destructor!
  // Specifies what happens when we destroy an object
  ~IntArray();

  // Get the size of our array
  int get_size() const { return size; }

  // Get a raw pointer to the data
  int *get_data() const { return data; }

  // Overloaded operator to index our data
  int &operator[](unsigned id) { return data[id]; }
};

// Our constructor where we allocate memory
IntArray::IntArray(int N) {
  // Memory is also value initialized
  cout << "Allocating memory in constructor!\n";
  data = new int[N]();
  size = N;
}

// Our copy constructor that performs a deep copy!
IntArray::IntArray(const IntArray &a) {
  // Check if we need to re-allocate
  int copy_n = a.get_size();
  int *copy_ptr = a.get_data();
  if (size != copy_n && data != nullptr) {
    delete[] data;
  }

  // Copy the data
  data = new int[copy_n];
  for (int i = 0; i < copy_n; i++) {
    data[i] = copy_ptr[i];
  }
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
  for (int i = 0; i < a1.get_size(); i++) {
    a1[i] = i;
  }

  // Use the copy constructor
  IntArray a2 = a1;

  // With our custom constructor, we can stop our pointers from aliasing each
  // other!
  cout << "a1's pointer: " << a1.get_data()
       << " a2's pointer: " << a2.get_data() << '\n';

  return 0;
}
