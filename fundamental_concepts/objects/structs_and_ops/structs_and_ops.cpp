// This program shows off structures and operator overloading in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

struct USCurrency {
  int dollars;
  int cents;
  // Constructor with default values
  USCurrency(const int d = 0, const int c = 0) : dollars(d), cents(c) {}
};

// Overload the '+' operator to add two structures
USCurrency operator+(const USCurrency m, const USCurrency o) {
  USCurrency tmp(0, 0);
  tmp.cents = m.cents + o.cents;
  tmp.dollars = m.dollars + o.dollars;

  if (tmp.cents >= 100) {
    tmp.dollars += 1;
    tmp.cents -= 100;
  }

  return tmp;
}

int main() {
  // Create to structs with different values
  USCurrency wallet_1(5, 50);
  USCurrency wallet_2(6, 75);

  // Create a new struct and make it equal to the sum of the two
  // wallets
  USCurrency wallet_3 = wallet_1 + wallet_2;

  // Print the result
  cout << "$" << wallet_3.dollars << "." << wallet_3.cents << endl;

  return 0;
}
