// This program shows of control flow using the if, else, and switch
// statements
// By: Nick from CoffeeBeforeArch

#include <iostream>

using std::cout;

int main() {
  // Declare and initialize variables
  int a = 5;
  int b = 10;

  // For "if" statements, the encompassed code is only executed if the
  // condition is True.
  if (a == 5) {
    cout << "Inside if statement (a == " << a << ")\n";
  }

  // We can do multiple checks using chained "if"/"else" statements
  // Only 1 of these conditions is every executed
  if (a > 5) {
    cout << "a > 5 (within if)\n";
  } else if (b == 10) {
    cout << "b == 10 (within else if)\n";
  } else {
    cout << "Any other case!\n";
  }

  // Switch statements are an alternative to traditional "if"/"else"
  // statments.
  // We can have blocks executed if we do not put a "break" after each
  // case.
  switch (a) {
    case 4:
      cout << a << " == 4 (within case 4)\n";
      break;
    case 6:
      cout << a << " == 6 (within case 6)\n";
      break;
    default:
      cout << "a == " << a << " (within default)\n";
  }

  return 0;
}
