// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>

using std::cout;

// Our class from last example
template <class T>
class Array {
 private:
  T *data = nullptr;
  int size = 0;

 public:
  // Our constructor, default constructor, and and copy constructor
  Array(int N);
  Array() = delete;
  Array(const Array &a);
  ~Array();

  // Get the size of our array
  int get_size() const { return size; }

  // Our templated methods
  T *get_data() const { return data; }
  T &operator[](unsigned id) { return data[id]; }
};

// Our constructor where we allocate memory
template <class T>
Array<T>::Array(int N) {
  // Memory is also value initialized
  cout << "Allocating memory in constructor!\n";
  data = new T[N]();
  size = N;
}

// Our copy constructor that performs a deep copy!
template <class T>
Array<T>::Array(const Array &a) {
  // Check if we need to re-allocate
  int copy_n = a.get_size();
  T *copy_ptr = a.get_data();
  if (size != copy_n && data != nullptr) {
    delete[] data;
  }

  // Copy the data
  data = new T[copy_n];
  for (int i = 0; i < copy_n; i++) {
    data[i] = copy_ptr[i];
  }
}

// Our general destructor for arbitrary types
template <class T>
Array<T>::~Array() {
  cout << "Freeing our allocated memory in destructor!\n";
  delete[] data;
}

// Our specialized destructor for floating point numbers
template <>
Array<float>::~Array() {
  cout << "Hello from the float destructor!\n";
  delete[] data;
}

int main() {
  // Create an array with 10 elements
  Array<float> a1(10);
  for (int i = 0; i < a1.get_size(); i++) {
    a1[i] = i;
  }

  // Use the copy constructor
  Array<float> a2 = a1;

  // With our custom constructor, we can stop our pointers from aliasing each
  // other!
  cout << "a1's pointer: " << a1.get_data()
       << " a2's pointer: " << a2.get_data() << '\n';

  return 0;
}
