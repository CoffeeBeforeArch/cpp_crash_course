// This program shows off the basics of constructors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

// Our class from last example
class Wallet {
 private:
  int dollars;
  int cents;

 public:
  // Our constructor, and default constructor
  Wallet(int d, int c);
  Wallet() = default;

  // A copy constructor!
  Wallet(const Wallet &w);

  void print();
  void set_dollars(int d) { dollars = d; }
  void set_cents(int c) { cents = c; }
  int get_dollars() const { return dollars; }
  int get_cents() const { return cents; }
};

// Constructors have the same name as the class they belong to
Wallet::Wallet(int d, int c) {
  dollars = d;
  cents = c;
}

// Copy constructs also have the name as the class they belong to, but they take
// a another instance of the class as a parameter.
Wallet::Wallet(const Wallet &w) {
  std::cout << "Calling the copy constructor!\n";
  dollars = w.get_dollars();
  cents = w.get_cents();
}

void Wallet::print() {
  std::cout << "Value of wallet = $" << dollars << "." << cents << '\n';
}

int main() {
  // Let's create one object using our constructor
  Wallet w1(10, 37);
  w1.print();

  // Create a new object using the copy constructor!
  Wallet w2 = w1;
  w2.print();

  return 0;
}
