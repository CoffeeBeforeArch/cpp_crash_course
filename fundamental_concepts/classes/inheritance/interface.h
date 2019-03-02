// This file contains the interface for our inheritance example
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
// May be accessed from within the class, or inherited classes
protected:
    string license;
    int year;
public:
    // Constructor with initialization list (needed for constants)
    Vehicle(const string &myLicense, const int &myYear)
        : license(myLicense), year(myYear) {}
    const string &getLicense() const {return license;}
    const int &getYear() const {return year;}
};

// Car class inherits from Vehicle class
// Public lets us keep original access specifiers
class Car : public Vehicle {
private:
    string style;
public:
    // Another initialization list
    Car(const string &myLicense, const int myYear, const string myStyle)
        : Vehicle(myLicense, myYear), style(myStyle) {}
    const string &getStyle() const {return style;}
};

// Truck class that also inherits from Vehicle
class Truck : public Vehicle {
private:
    int bed_length;
public:
    // Another initialization list
    Truck(const string &myLicense, const int myYear, const int myBedLength)
        : Vehicle(myLicense, myYear), bed_length(myBedLength) {}
    const int &getBedLength() {return bed_length;}
};

