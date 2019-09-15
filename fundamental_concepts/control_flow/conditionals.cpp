// This program shows of control flow using the if, else, and switch
// statements
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main() {
  // Declare and initialize variables
  int a = 5;
  int b = 10;

  // For "if" statements, the encompassed code is only executed if the
  // condition is True.
  if (a == 5) {
    cout << "Inside if statement (a == " << a << ")" << endl;
  }

  // We can do multiple checks using chained "if"/"else" statements
  // Only 1 of these conditions is every executed
  /*
  if (a > 5) {
    cout << "a > 5 (within if)" << endl;
  } else if (b == 10) {
    cout << "b == 10 (within else if)" << endl;
  } else {
    cout << "Any other case!" << endl;
  }
  */
  // Switch statements are an alternative to traditional "if"/"else"
  // statments.
  // We can have blocks executed if we do not put a "break" after each
  // case.
  /*
  switch (a) {
    case 4:
      cout << a << " == 4 (within case 4)" << endl;
      break;
    case 6:
      cout << a << " == 6 (within case 6)" << endl;
      break;
    default:
      cout << "a == " << a << " (within default)" << endl;
  }
  */
  return 0;
}
