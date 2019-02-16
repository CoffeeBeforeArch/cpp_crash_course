// This program initializes some variables and performs 
// some arithmetic operations on them. It also prints a
// string.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main(){
    // Declare variables
    float a;
    float b;
    float sum;
    const char* some_string = "Hey there, fella!\n";

    // Initialize variables
    a = 5.823;
    b = 10.123;

    // Compute the sum
    sum = a + b;

    // Print string and sum
    cout << some_string;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}
