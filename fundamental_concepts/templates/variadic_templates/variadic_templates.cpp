// This program covers the basics of variadic templates in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

using namespace std;

// This is the base case for our recursive function
template <typename T>
T adder(T v){
    //cout << __PRETTY_FUNCTION__ << endl;
    return v;
}

// Variable number of input arguments in a template
// "typename... Args" is a template parameter pack
// "Args... args" is a function parameter pack
// We can use recursive calls to unpack all the arguments!
template <typename T, typename... Args>
T adder(T first, Args... args){
    //cout << __PRETTY_FUNCTION__ << endl;
    return first + adder(args...);
}

int main(){
    // We can calculate a sum with a variable number of integers
    int int_sum = adder(1, 2, 3, 4, 5);
    cout << "The integer sum is " << int_sum << endl;

    // We can calculate a sum with a  variable number of floats
    float float_sum = adder(1.5, 2.5, 3.5, 4.5, 5.5);
    cout << "The floating point sum is " << float_sum << endl;

    // Declare some strings we want to combine
    string partial_1 = "This ";
    string partial_2 = "does ";
    string partial_3 = "concatenation!";

    // We can concatenate a varaible number of strings
    string concatenate = adder(partial_1, partial_2, partial_3);
    cout << concatenate << endl;

    return 0;
}
