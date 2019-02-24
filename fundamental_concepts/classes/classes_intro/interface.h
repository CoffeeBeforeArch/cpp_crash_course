// This header file includes the classes relating to two
// different vector classes
// By: Nick from CoffeeBeforeArch

// A vector class that has all coordinates
class vector1{
public:
    double start_x;
    double start_y;
    double end_x;
    double end_y;

    // Prototype for print function
    void print();
};

// A point class that contains a single coordinate pair
class point{
public:
    double x;
    double y;
};

// A vector class that has coordinates as point objects
class vector2{
public:
    point start;
    point end;
};


