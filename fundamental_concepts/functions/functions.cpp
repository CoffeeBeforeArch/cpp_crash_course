// This program shows off built in and user defined functions to print
// the size of different data types and return different values.
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Prints the size of a character and updates value
char print_char(char c){
    cout << "char value " << c << ", char size is " << sizeof(c) << endl;
    return 'A';
}

// Prints the size of an integer and updated value
int print_int(int i){
    cout << "int value " << i << ", int size is " << sizeof(i) << endl;
    return 1234;
}

// Prints the size of a single precision floating point number and updates value
float print_float(float f){
    cout << "float value " << f << ", float size is " << sizeof(f) << endl;
    return 12.832;
}

// Prints the size of a double precision floating point number and updates value
double print_double(double d){
    cout << "double value " << d << ", double size is " << sizeof(d) << endl;
    return 594.123;
}

int main(){
    // Declare and initialize variables
    char character = 'a';
    int integer = 4362;
    float single_precision = 20.123;
    double double_precision = 194.421;

    // Call functions
    character = print_char(character);
    integer = print_int(integer);
    single_precision = print_float(single_precision);
    double_precision = print_double(double_precision);

    // Add space between old and new values
    cout << endl;

    // Print out new values
    cout << "char value " << character << endl;
    cout << "int value " << integer << endl;
    cout << "float value " << single_precision << endl;
    cout << "double value " << double_precision << endl;

    return 0;
}
