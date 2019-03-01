// This file contains the interface for our inheritance example
// By: Nick from CoffeeBeforeArch

class Vehicle {
// May be accessed from within the class, or inherited classes
protected:
    int year;
    int vin;
public:
    // Constructor with initialization list
    vehicle(const int &myYear, const int &myVIN)
        : year(myYear), vin(myVIN) {}
