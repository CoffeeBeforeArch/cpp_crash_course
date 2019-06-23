// This program shows off the basics of unordered maps in the C++11
// standard (implemented via a hash table)
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    // Create an unordered map of strings to integers
    // Will use it to store some constants
    unordered_map<string, double> constants;

    // Use strings for the name of constants
    string pi = "PI";
    string root2 = "ROOT2";
    string e = "E";

    // Add some constants to the map
    constants[pi] = 3.14159265;
    constants[root2] = 1.414;
    
    // We can also insert with a method
    constants.insert(make_pair(e, 2.718));

    // Dump all values in the map
    for(auto itr = constants.begin(); itr != constants.end(); itr++){
        cout << "Key: " << itr->first << " Value: " << itr->second
            << endl;
    }

    // Example of how to check if a value is in the map
    string lambda = "LAMBDA";
    // End points to the position after the last elements
    if(constants.find(lambda) == constants.end()){
        cout << "Was not able to find: " << lambda << endl;
    }

    return 0;
}
