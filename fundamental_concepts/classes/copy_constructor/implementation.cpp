// This program implements a vector using using a class
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

using namespace std;

vector::vector(double x1, double y1, double x2, double y2){
    start_x = x1;
    start_y = y1;
    end_x = x2;
    end_y = y2;
}

vector::vector(){
    start_x = 0;
    start_y = 0;
    end_x = 0;
    end_y = 0;
}

vector::vector(vector &v){
    start_x = v.end_x;
    start_y = v.end_y;
    end_x = v.start_x;
    end_y = v.start_y;
}

// Method associated with the vector1 to print out the vector
void vector::print(){
    cout << "Start x: " << start_x << ", Start y: " << start_y << endl;
    cout << "End x: " << end_x << ", End y: " << end_y << endl;
}
