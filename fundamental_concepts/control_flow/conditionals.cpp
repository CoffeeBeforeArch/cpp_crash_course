// This program shows of control flow using the if, else, and switch
// statements
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main() {
  // Declare and initialize variables
  int a = 5;
  int b = 10;

  // if statement
  if (a == 5) {
    cout << "Inside if statement (a == " << a << ")" << endl;
  }

  // if and else statements
  if (a > 5) {
    cout << "a > 5 (within if)" << endl;
  } else if (b == 10) {
    cout << "b == 10 (within else if)" << endl;
  } else {
    cout << "Any other case!" << endl;
  }

  // switch statement
  switch (a) {
    case 4:
      cout << a << " == 4 (within case 4)" << endl;
      break;
    case 6:
      cout << a << " == 5 (within case 6)" << endl;
      break;
    default:
      cout << "a == " << a << " (within default)" << endl;
  }

  return 0;
}
