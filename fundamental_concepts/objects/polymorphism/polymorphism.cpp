// This program shows off the basics of polymorphism in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

// A simple class without inheritence
class NoInheritence {};

// Our base class with a virtual function
class Mammal {
 public:
  virtual void speak() { std::cout << "I am a mammal!\n"; }
};

// Our first inherited class
class Dog : Mammal {
 public:
  void speak() { std::cout << "I am a mammal, but also a dog!\n"; }
};

// Our second inherited class
class Cat : Mammal {
 public:
  void speak() { std::cout << "I am a mammal, but also a cat!\n"; }
};

int main() {
  // Print the size of classes w/ and w/o polymorphism
  std::cout << "sizeof(NoInheritence) = " << sizeof(NoInheritence) << '\n';
  std::cout << "sizeof(Mammal) = " << sizeof(Mammal) << '\n';

  return 0;
}
