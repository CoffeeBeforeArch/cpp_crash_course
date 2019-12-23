// This program showcases how inheritance can be used in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using std::cout;

int main() {
  // Create two different car classes
  Car car1("ABC-123", 2003, "Four-Door");
  Car car2("VANITY", 2018, "Two-Door");

  // Print out license using common method from base class
  cout << "Car 1 License: " << car1.getLicense() << '\n';
  cout << "Car 2 License: " << car2.getLicense() << '\n';

  // Print out the year of each car
  cout << "Car 1 Year: " << car1.getYear() << '\n';
  cout << "Car 2 Year: " << car2.getYear() << '\n';

  // Print out style
  cout << "Car 1 Style: " << car1.getStyle() << '\n';
  cout << "Car 2 Style: " << car2.getStyle() << '\n';

  // Create a Truck object
  // Print out using Vehicle, and Truck-specific methods
  Truck truck1("456-DEF", 2014, 7);
  cout << "Truck 1 License: " << truck1.getLicense() << '\n';
  cout << "Truck 1 Year: " << truck1.getYear() << '\n';
  cout << "Truck 1 Bed Length: " << truck1.getBedLength() << '\n';

  return 0;
}
