// This program showcases how inheritance can be used in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main() {
  // Create two different car classes
  Car car1("ABC-123", 2003, "Four-Door");
  Car car2("VANITY", 2018, "Two-Door");

  // Print out license using common method from base class
  cout << "Car 1 License: " << car1.getLicense() << endl;
  cout << "Car 2 License: " << car2.getLicense() << endl;

  // Print out the year of each car
  cout << "Car 1 Year: " << car1.getYear() << endl;
  cout << "Car 2 Year: " << car2.getYear() << endl;

  // Print out style
  cout << "Car 1 Style: " << car1.getStyle() << endl;
  cout << "Car 2 Style: " << car2.getStyle() << endl;

  // Create a Truck object
  // Print out using Vehicle, and Truck-specific methods
  Truck truck1("456-DEF", 2014, 7);
  cout << "Truck 1 License: " << truck1.getLicense() << endl;
  cout << "Truck 1 Year: " << truck1.getYear() << endl;
  cout << "Truck 1 Bed Length: " << truck1.getBedLength() << endl;

  return 0;
}
