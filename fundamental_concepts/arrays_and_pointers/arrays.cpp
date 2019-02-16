// This program shows off arrays and pointer arithmetic in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

int main(){
    // Declare integer array
    int a[10];

    // Initialize integer array
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }

    // Print out array
    for(int i = 0; i < 10; i++){
        cout << "Index " << i << ", value " << a[i] << ", address " << &a[i] << endl;
    }
    cout << endl;

    // Declare and initialize integer array at the same time
    int b[] = {10, 11, 12};
    for(int i = 0; i < 3; i++){
        cout << "Index " << i << ", value " << b[i] << endl;
    }
    cout << endl;

    // Pointer arithmetic
    int *ptr = b;
    cout << "b[0] = *ptr = " << *ptr << endl;
    ptr++;
    cout << "b[1] = *(ptr++) = " << *ptr << endl;
    cout << endl;

    // These letters can be changed!
    char hw_array[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd','!'};

    // These are in read-only memory (letters are fixed!)
    const char *hw_string = "Hello World!";

    // Print out both Hello World strings
    cout << hw_array << endl;
    cout << hw_string << endl;

    return 0;
}
