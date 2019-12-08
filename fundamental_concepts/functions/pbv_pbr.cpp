// This program shows off two functions for multiplication that use pass
// by value and pass by reference respectively
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

// Our class from last example
class Wallet {
 private:
  int dollars;
  int cents;

 public:
  // Our constructors and copy constructor
  Wallet(int d, int c);
  Wallet() = default;
  Wallet(const Wallet &w);

  // Our methods
  void print();
  void set_dollars(int d) { dollars = d; }
  void set_cents(int c) { cents = c; }
  int get_dollars() const { return dollars; }
  int get_cents() const { return cents; }
};

// Custom constructor
Wallet::Wallet(int d, int c) {
  dollars = d;
  cents = c;
}

// Copy constructor
Wallet::Wallet(const Wallet &w){
  cout << "Calling the copy constructor!" << endl;
  dollars = w.get_dollars();
  cents = w.get_cents();
}

void Wallet::print() {
  cout << "Value of wallet = $" << dollars << "." << cents << endl;
}

// Assigns a random number from 0-99 to the dollars and cents fields
// Pass by value
void randomWallet_pbv(Wallet w){
  // The variable "w" is local to this function only!
  // It's no longer valid when the function returns!
  w.set_dollars(rand() % 100);
  w.set_cents(rand() % 100);
  cout << "Print from PBV function" << endl;
  w.print();
}

// Assigns a random number from 0-99 to the dollars and cents fields
// Pass by reference
void randomWallet_pbr(Wallet &w){
  // The variable "w" now refers to the one from the main function!
  // There is not copy constructor because we are modifying the original object
  w.set_dollars(rand() % 100);
  w.set_cents(rand() % 100);
  cout << "Print from PBR function" << endl;
  w.print();
}

int main() {
  // Let's start by creating a wallet
  Wallet w1(10, 37);

  // What happens when we pass a wallet to the function by value?
  // The copy constructor gets called!
  // A copy of the wallet is modified, not the original
  randomWallet_pbv(w1);
  
  // Print out the values in main
  cout << "Print from main" << endl;
  w1.print();

  // When we pass a wallet by reference, we are not making a temporary!
  // This is useful when we have large objects that would be expensive to copy.
  randomWallet_pbr(w1);

  // Print out the values in main
  cout << "Print from main" << endl;
  w1.print();

  return 0;
}
