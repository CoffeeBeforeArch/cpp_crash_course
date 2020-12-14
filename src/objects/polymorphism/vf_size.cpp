// This program shows off the size of objects with virtual functions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// Class with only a single virtual function
struct VF {
  virtual float retVal() { return 1.0f; }
};

// Class with a single method
struct NoVF {
  float retVal() { return 1.0f; }
};

int main() {
  std::cout << "sizeof(VF) = " << sizeof(VF) << '\n';
  std::cout << "sizeof(NoVF) = " << sizeof(NoVF) << '\n';
  return 0;
}
