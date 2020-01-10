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

  // Our destructor!
  // Specifies what happens when we destroy an object
  ~IntArray();

  // Get the size of our array
  int get_size() const { return size; }

  // Get a raw pointer to the data
  int *get_data() const { return data; }

  // Overloaded operator to index our data
  int &operator[](unsigned id) { return data[id]; }

  // A print method for dumping our IntArray contents
  void print();
};

// Our print method
void IntArray::print() {
  cout << "Printing contents starting at " << data << '\n';
  for (int i = 0; i < size; i++) {
    cout << data[i] << ' ';
  }
  cout << '\n';
}

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
  for (int i = 0; i < a1.get_size(); i++) {
    a1[i] = i * i;
  }

  // Dump the values
  a1.print();

  return 0;
}
