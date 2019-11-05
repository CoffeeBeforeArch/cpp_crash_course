// This program implements a vector and point using using a class
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "interface.h"

using namespace std;

// Method for updating the values of a point
void point::update(double new_x, double new_y) {
  x = new_x;
  y = new_y;
}

// Method for printing the coordinates of a point
void point::print() { cout << "x: " << x << ", y: " << y << endl; }

// Constructor for an empty vector
vector::vector() {
  start.update(0.0, 0.0);
  end.update(0.0, 0.0);
}

// Constructor to set the value of the vector upon creation
vector::vector(double x1, double y1, double x2, double y2) {
  start.update(x1, y1);
  end.update(x2, y2);
}

// Method for updating the values of a point
void vector::update(double x1, double y1, double x2, double y2) {
  start.update(x1, y1);
  end.update(x2, y2);
}

// Method printing the start and end points of the vector
void vector::print() {
  start.print();
  end.print();
}
