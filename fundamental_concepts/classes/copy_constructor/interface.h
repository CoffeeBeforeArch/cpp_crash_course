// This header file includes a vector class with a copy
// constructor
// By: Nick from CoffeeBeforeArch

// A vector class that has all coordinates
class vector{
public:
    double start_x;
    double start_y;
    double end_x;
    double end_y;

    // Constructors
    vector();
    vector(double x1, double y1, double x2, double y2);
    // Copy constructor (has original object passed by reference)
    vector(vector &v);
    
    // Prototype for print function
    void print();

};
