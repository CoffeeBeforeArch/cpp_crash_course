// This program shows off strings in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Declare a new string
    string str1;

    // Unlike C-strings, these don't have to be constant!
    str1 = "This is an example string!";
    
    // Print out the first string
    cout << str1 << endl;

    // Declare and initialize another string
    string str2 = "This is another string!";

    // Swap the two strings and print
    str1.swap(str2);
    cout << "Swapped string 1: " << str1 << endl;
    cout << "Swapped string 2: " << str2 << endl;

    // Replace all the characters with 'a' and print
    for(int i = 0; i < str1.size(); i++)
        str1.at(i) = 'a';
    cout << str1 << endl;
    
    // Print out string size and capacity
    cout << "Size: " << str1.size() << endl;
    cout << "Capacity: " << str1.capacity() << endl;

    // Re-size the string to 5 characters and print size and capacity
    str1.resize(5);
    cout << str1 << endl;
    cout << "Size: " << str1.size() << endl;
    cout << "Capacity: " << str1.capacity() << endl;

    // Call shrink to fit to match the number of characters
    str1.shrink_to_fit();
    cout << str1 << endl;
    cout << "Size: " << str1.size() << endl;
    cout << "Capacity: " << str1.capacity() << endl;

    return 0;
}
