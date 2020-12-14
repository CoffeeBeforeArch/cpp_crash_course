// This program shows off the basics of templated classes in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

// A simple templated class that holds a dynamically allocated array
template <class T>
class Data {
 public:
  // Disable default constructor and copying
  Data() = delete;
  Data(const Data &d) = delete;
  Data &operator=(const Data &rhs) = delete;

  // We'll implement our own custom constructor destructor, and indexing
  Data(int N);
  ~Data();
  T &operator[](const unsigned i);

 private:
  // A pointer to our data
  T *d;
};

// Our templated constructor
template <class T>
Data<T>::Data(int N) {
  d = new T[N]();
}

// Our templated destructor
template <class T>
Data<T>::~Data() {
  cout << "Printing from the basic destructor!\n";
  delete[] d;
}

// Our templated indexing operator
template <class T>
T &Data<T>::operator[](const unsigned i) {
  return d[i];
}

// Our specialized destructor!
// Allows us to treat some types differently than the general case
template <>
Data<float>::~Data() {
  cout << "Printing from the float destructor!\n";
  delete[] d;
}

int main() {
  // Create some Data objects of with different types
  Data<int> d1(10);
  Data<char> d3(10);
  Data<bool> d4(10);
  Data<float> d2(10);

  // Destructors fire when we return!
  return 0;
}
