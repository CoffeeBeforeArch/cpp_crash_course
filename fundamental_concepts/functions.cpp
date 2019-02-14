// This program shows off built in and user defined functions to print
// the size of different data types.

#include <iostream>

using namespace std;

// Prints the size of a character
void print_char(char c){
    cout << "char size is " << sizeof(c) << endl;
}

// Prints the size of an integer
void print_int(int i){
    cout << "int size is " << sizeof(i) << endl;
}

// Prints the size of a single precision floating point number
void print_float(float f){
    cout << "float size is " << sizeof(f) << endl;
}

// Prints the size of a double precision floating point number
void print_double(double d){
    cout << "double size is " << sizeof(d) << endl;
}

int main(){
    // Declare and initialize variables
    char character = 23;
    int integer = 4362;
    float single_precision = 20.123;
    double double_precision = 194.421;

    // Call functions
    print_char(character);
    print_int(integer);
    print_float(single_precision);
    print_double(double_precision);

    return 0;
}
