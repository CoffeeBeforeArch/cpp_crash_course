// This program shows off some of the many modifier in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// This function shows off how a static variable is persistant
// between function calls
void static_count(){
    // Initialize a static variable
    // This is persistant between function calls
    static int count = 0;

    // Print the current value of count
    cout << "Count = " << count << endl;

    // Increment the static variable
    count++;
}

class flagClass {
private:
    // Create a mutable variable
    // These can be modified from a const member function
    mutable int accesses;
    bool flag;
public:
    // Constructor
    flagClass(bool f){
        accesses = 0;
        flag = f;
    }

    // Method that returns the flag, and counts accesses
    bool get_flag() const {
        // Even though this is constant we can modify access
        accesses++;
        cout << "Accesses incremented to " << accesses << endl;
        return flag;
    }
    
};

int main(){
    // Call the static variable example function 5 times
    for(int i = 0; i < 5; i++){
        static_count();
    }

    // Create a constant class
    // This can not be modified after creation
    const flagClass fc(true);
    
    // Call the get_flag method 5 times and print the result and
    // number of accesses
    bool flag;
    for(int i = 0; i < 5; i++){
        flag = fc.get_flag();
        cout << "Flag: " << flag << endl;
    }

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
