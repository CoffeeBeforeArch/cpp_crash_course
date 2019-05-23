// This program shows off the standard code to compare against AVX
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main(){
    // Normal arrays packed with even and odd floating point numbers
    float evens[] = {2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0};
    float odds[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0};

    // Output array
    float result[8] = {0};

    // Do the subtraction
    for(int i = 0; i < 8; i++){
        result[i] = evens[i] - odds[i];
    }

    // Print the result
    cout << "Result: ";
    for(int i = 0; i < 8; i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

