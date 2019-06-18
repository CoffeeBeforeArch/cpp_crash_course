// This program shows off ordered maps from the C++11 standard
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<int, int> ordered_map;

    // Add three elements to the map
    ordered_map[9] = 9 * 9;
    ordered_map[4] = 4 * 4;
    ordered_map[1] = 1 * 1;

    // Print keys and values of the map
    // Implemented with a self-balancing red-black tree
    for(auto itr = ordered_map.begin(); itr != ordered_map.end(); itr++){
        cout << "Key: " << itr->first << " Value: " << itr->second << endl;
    }
   
    // Let's use strings as the key to our map
    string animal1 = "aardvark";
    string animal2 = "bee";
    string animal3 = "zebra";

    // Create an ordered map indexed by the key
    map<string, int> animals;

    // Insert using the insert method
    animals.insert(make_pair(animal3, 10));
    animals.insert(make_pair(animal2, 10));
    animals.insert(make_pair(animal1, 10));

    // Print out the contents of the map
    // Note: This is sorted lexicographic order for strings
    for(auto itr = animals.begin(); itr != animals.end(); itr++){
        cout << "Key: " << itr->first << " Value: " << itr->second << endl;
    }
    
    return 0;
}
