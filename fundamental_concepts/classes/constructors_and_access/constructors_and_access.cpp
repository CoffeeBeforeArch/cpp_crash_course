// This program shows off class constructors and class access
// modifiers in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

using namespace std;

int main(){
    // Create two vectors with two different constructors
    vector v1;
    vector v2(1.0, 2.0, 3.0, 4.0);

    // Print out both vectors
    v1.print();
    v2.print();

    // Update the empty vector and display value
    v1.update(5.0, 5.0, 7.0, 7.0);
    v1.print();

    return 0;
}
