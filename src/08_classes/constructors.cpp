// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// Our class from last example
class Wallet {
 private:
  int dollars;
  int cents;

 public:
  // Classes usually have constructors that say what to do when we make an
  // object
  // We'll define our own that initializes 'dollars' and 'cents' with some
  // values
  Wallet(int d, int c);

  // We can also have a default constructor created by the compiler
  Wallet() = default;

  void print();

  void set_dollars(int d) { dollars = d; }
  void set_cents(int c) { cents = c; }
  int get_dollars() { return dollars; }
  int get_cents() { return cents; }
};

// Constructors have the same name as the class they belong to
Wallet::Wallet(int d, int c) {
  dollars = d;
  cents = c;
}

void Wallet::print() {
  std::cout << "Value of wallet = $" << dollars << "." << cents << '\n';
}

int main() {
  // Let's create one object using our constructor
  Wallet w1(10, 37);
  w1.print();

  // If we don't write a default constructor, the compiler defines one for us
  // Let's create one class using the default constructor
  // Warning! This does not initialize the values!
  Wallet w2;
  // Likely does not print what we are expecting (garbage values)
  w2.print();

  // Creating here we are zero-initialing a class, and assigning it to w3
  Wallet w3 = Wallet();
  // Wallet w3 = {};
  w3.print();

  return 0;
}
