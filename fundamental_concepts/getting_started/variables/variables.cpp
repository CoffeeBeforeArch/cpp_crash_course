// This program initializes some variables and performs
// some arithmetic operations on them. It also prints a
// string.
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    // Declare variables
    float a;
    float b;
    float sum;

    // Initialize variables
    a = 5.823;
    b = 10.123;

    // Declare and initialize a string
    string some_string = "Hey there, fella!";

    // Compute the sum
    sum = a + b;

    // Print string and sum
    cout << some_string << endl;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    return 0;
}
