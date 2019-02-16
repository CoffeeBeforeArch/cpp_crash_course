// This program shows off overloaded functions in C++ to print
// the size of different data types.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Prints the size of a character
void print(char c){
    cout << "char size is " << sizeof(c) << endl;
}

// Prints the size of an integer
void print(int i){
    cout << "int size is " << sizeof(i) << endl;
}

// Prints the size of a single precision floating point number
void print(float f){
    cout << "float size is " << sizeof(f) << endl;
}

// Prints the size of a double precision floating point number
void print(double d){
    cout << "double size is " << sizeof(d) << endl;
}

int main(){
    // Declare and initialize variables
    char character = 23;
    int integer = 4362;
    float single_precision = 20.123;
    double double_precision = 194.421;

    // Call functions with same name but different signatures
    print(character);
    print(integer);
    print(single_precision);
    print(double_precision);

    return 0;
}
