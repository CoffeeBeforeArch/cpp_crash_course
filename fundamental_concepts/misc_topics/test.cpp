// This is a simple program to check how volatile is compiled
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main(){
    // Create two new integers
    // One is volatile, the other is not
    int non_volatile_int = 1;
    volatile int volatile_int = 1;

    // Count up with the non-volatile in a loop
    for(int i = 0; i < 16; i++){
        non_volatile_int *= 2;
    }


    // Count up with the volatile in a loop
    for(int i = 0; i < 16; i++){
        volatile_int *= 2;
    }

    // Print out the results (These will always be the same in a
    // single-threaded program)
    cout << "Non-Volatile = " << non_volatile_int << endl;
    cout << "Volatile = " << volatile_int << endl;

    return 0;
}
