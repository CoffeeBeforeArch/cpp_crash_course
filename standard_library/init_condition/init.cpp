// This program shows off how the init feature with for conditional
// and switch statements in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

using namespace std;

int main(){
    // We begin our example with a string
    string hello = "Hello, World in C++17!";

    // Before testing we try and find the position
    auto val1 = hello.find("Hello");
    if(val1 != string::npos){
        cout << val1 << " - Hello" << endl;
    }

    // We need another name (same scope)
    auto val2 = hello.find("World");
    if(val2 != string::npos){
        cout << val2 << " - World" << endl;
    }

    // Contain scope using the new init/condition syntax!
    if(auto val = hello.find("C++17"); val != string::npos){
        cout << "Found C++17 at " << val << " without leaking scope!"
            << endl;
    }

    return 0;
}
