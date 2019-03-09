// This program shows of templated functions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Overloading for "sum" works, but seems excessive if we have many
// types of a singled function. Do we really need to re-write sum
// for every possible data type?
int sum_overload(const int a, const int b){
    return a + b;
}

double sum_overload(const double a, const double b){
    return a + b;
}

// Of course not! We have templates!
// Templates turn a data type into a parameter! Compiler will generate
// code for us at compile time.
template <typename T>
T sum(const T a, const T b){
    return a + b;
}

int main(){
    // Variables for functions
    int a_i = 10;
    int b_i = 20;
    double a_d = 1.234;
    double b_d = 6.678;

    // Print out sums using overloaded functions
    cout << "Overload int sum: " << sum_overload(a_i, b_i) << endl;
    cout << "Overload double sum: " << sum_overload(a_d, b_d) << endl;

    // Print out sums using a templated functions with explicit type
    cout << "Templated int sum: " << sum<int>(a_i, b_i) << endl;
    cout << "Templated double sum: " << sum<double>(a_d, b_d) << endl;

    // Print out sums using a templated functions with implicit type
    cout << "Templated int sum: " << sum(a_i, b_i) << endl;
    cout << "Templated double sum: " << sum(a_d, b_d) << endl;

    return 0;
}
