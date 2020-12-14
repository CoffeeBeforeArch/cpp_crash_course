// This program shows off the basics of operator overloading in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

// Our class from last example
class Wallet {
 private:
  int dollars;
  int cents;

 public:
  // Our constructor, and default constructor
  Wallet(int d, int c);
  Wallet() = default;
  Wallet(const Wallet &w);

  // We can define what the operators do for our class
  // Here, we define a way to add the contents of 2 wallets
  Wallet operator+(const Wallet w1);

  void print();
  void set_dollars(int d) { dollars = d; }
  void set_cents(int c) { cents = c; }
  int get_dollars() const { return dollars; }
  int get_cents() const { return cents; }
};

// Constructor initializing dollars and cents
Wallet::Wallet(int d, int c) {
  dollars = d;
  cents = c;
}

// Our copy constructor with a print
Wallet::Wallet(const Wallet &w) {
  cout << "Calling the copy constructor!\n";
  dollars = w.get_dollars();
  cents = w.get_cents();
}

// Our custom addition operator
Wallet Wallet::operator+(const Wallet w1) {
  // Calculate the total number of cents in the wallet
  int d = dollars + w1.get_dollars();
  int c = cents + w1.get_cents() + d * 100;

  // Covert total cents into dollars and cents
  return Wallet(c / 100, c % 100);
}

// Our method for printing the contents of a wallet
void Wallet::print() {
  cout << "Value of wallet = $" << dollars << "." << cents << '\n';
}

int main() {
  // Let's create one object using our constructor
  Wallet w1(10, 37);
  Wallet w2(1, 85);

  // Use our custom addition operator
  Wallet w3 = w1 + w2;

  // Print the contents
  w3.print();

  return 0;
}
