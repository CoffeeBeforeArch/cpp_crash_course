// This program shows off the difference between deep and shallow copies in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

// Our class from last example
class IntArray {
 private:
  int *data = nullptr;
  int size = 0;

 public:
  // Out constructor, copy constructor, and destructor
  IntArray(int N);
  IntArray() = delete;
  IntArray(const IntArray &a) = default;
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

// Out destructor that frees memory
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

  // Copy the elements with a deep copy
  IntArray a2 = a1;

  // Dump the values
  a1.print();
  a2.print();

  return 0;
}
