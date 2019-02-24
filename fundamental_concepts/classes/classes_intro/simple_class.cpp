// This program shows off basic classes in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

using namespace std;

// Normal function that prints the starting and ending points of a vector
void print_vector1(vector1 v){
    cout << "Start x: " << v.start_x << ", Start y: " << v.start_y << endl;
    cout << "End x: " << v.end_x << ", End y: " << v.end_y << endl;
}

int main(){
    // Represent a vector (1.0, 2.0), (3.0, 4.0) using a single object
    vector1 single_object;
    single_object.start_x = 1.0;
    single_object.start_y = 2.0;
    single_object.end_x = 3.0;
    single_object.end_y = 4.0;

    // Pass the object to a function
    print_vector1(single_object);

    // Print using a method
    single_object.print();

    // Represent a vector using multiple objects
    vector2 multiple_objects_1;
    multiple_objects_1.start.x = 1.0;
    multiple_objects_1.start.y = 2.0;
    multiple_objects_1.end.x = 3.0;
    multiple_objects_1.end.y = 4.0;

    // Copy a vector
    vector2 multiple_objects_2 = multiple_objects_1;

    return 0;
}
