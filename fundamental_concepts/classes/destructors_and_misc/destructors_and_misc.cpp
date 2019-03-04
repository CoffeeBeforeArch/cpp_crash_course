// This program shows off a few details about classes and destructors
// in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main(){
    // Create a new integer array using our class
    IntegerArray ia1(10);

    // Fill the array with some values
    for(int i = 0; i < ia1.size; i++){
        ia1.data[i] = i;
    }

    // Copy the object, but this will only be destroyed after it leaves
    // the scope of the if statement
    if(true){
        IntegerArray ia2 = ia1;
    }

    return 0;
}
