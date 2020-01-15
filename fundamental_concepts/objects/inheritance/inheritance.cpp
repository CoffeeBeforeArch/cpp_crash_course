// This program shows off the basics of inheritance in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

// Inheritance allows us to re-use code for classes and structs!
// If we have multiple classes that share the same data members and methods, we
// can implement those a single time as a parent class, and inherit from that
// class!

// Here, we create a simple classs with a single std::string
struct Parent {
  // Out constructor that takes a string
  Parent(std::string n) { name = n; }
  std::string name;
  void print_name() { std::cout << "My name is " << name << '\n'; }
};

// Our Child class inherits from the Parent class
// We can expand on the parent class, and implement things specific to the child
// class
struct Child : Parent {
  // We can use an initialization list to call our parents constructor
  // These can automatically called before we construct a Child object
  Child(std::string n, std::string t) : Parent(n) { favorite_toy = t; }
  std::string favorite_toy;
  void print_toy() {
    std::cout << "My favorite toy is a(n) " << favorite_toy << '\n';
  }
};

int main() {
  // Let's look at the sizes of different object
  // The string object in modern versions of GCC is 32 Bytes
  // Our Parent class with one string ends up being the size of the string
  // Our Child class ends up having the size of two strings!
  std::cout << "sizeof(std::string) = " << sizeof(std::string) << '\n';
  std::cout << "sizeof(Parent) = " << sizeof(Parent) << '\n';
  std::cout << "sizeof(Child) = " << sizeof(Child) << '\n';

  // Let's create an instance of our classes
  Parent p("Yale Patt");
  Child c("Doug Burger", "FPGA");

  // And do some prints!
  p.print_name();
  c.print_name();
  c.print_toy();

  return 0;
}
