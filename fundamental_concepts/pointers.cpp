// This program shows off basic pointer usage in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main(){
    // Declare and Initialize variable
    int a = 5;

    // Declare and Initialize pointer
    int *b;
    b = &a;

    // Print values and addresses
    cout << "a: value: " << a << ", address " << &a << endl;
    cout << "b: value: " << b << ", address " << &b << endl;
    cout << "*b = a = " << *b << endl;
    cout << endl;

    // Set 'a' to a new value, and check addresses and values
    a = 10;

    // Print values and addresses
    cout << "a: value: " << a << ", address " << &a << endl;
    cout << "b: value: " << b << ", address " << &b << endl;
    cout << "*b = a = " << *b << endl;
    cout << endl;

    // Declare two new variables using references
    int c = 3;
    int &d = c;

    // Print values and addresses (no dereferencing needed!)
    cout << "c: value: " << c << ", address " << &c << endl;
    cout << "d: value: " << d << ", address " << &d << endl;
    
    return 0;
}
