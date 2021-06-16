// This program shows off the basics of polymorphism in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

// Our base class with a virtual function
class Mammal {
 public:
  virtual void speak() const { std::cout << "I am a mammal!\n"; }
};

// Our first inherited class
class Dog : public Mammal {
 public:
  void speak() const override {
    std::cout << "I am a mammal, but also a dog!\n";
  }
};

// Our second inherited class
class Cat : public Mammal {
 public:
  void speak() const override {
    std::cout << "I am a mammal, but also a cat!\n";
  }
};

// We can treat objects of different types in a uniform way!
void callFunc(Mammal &m) { m.speak(); }

int main() {
  // Let's create three objects
  Mammal m;
  Dog d;
  Cat c;

  // We Pass all three to a function which implicitly upcasts the objects
  // Each will still call the correct method (dynamic dispatch)
  callFunc(m);
  callFunc(d);
  callFunc(c);

  return 0;
}
