// This program shows off C++ while/do while loops doing multiplication
// using successive addition
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main() {
    // Declare and initialize variables
    int multiplicand = 5;
    int multiplier = 10;
    int product = 0;

    // Compute 5 * 10 using addition
    while (multiplier > 0) {
        product += multiplicand;
        multiplier--;
    }
    cout << "Multiplier = " << multiplier << ", product = " << product << endl;

    // Reset product, leave multiplier still at 0
    product = 0;
    do {
        product += multiplicand;
        multiplier--;
    } while (multiplier > 0);
    cout << "Multiplier = " << multiplier << ", product = " << product << endl;

    return 0;
}
