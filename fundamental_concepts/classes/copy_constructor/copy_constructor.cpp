// This program shows off copy constructors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

int main(){
    // Create a new vector object
    vector obj1(1.0, 2.0, 3.0, 4.0);

    // Print out the coordinates
    obj1.print();

    // Use the copy constructor
    vector obj2 = obj1;

    // Print the new object
    obj2.print();

    return 0;
}
