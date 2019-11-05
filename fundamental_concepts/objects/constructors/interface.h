// This header file includes the classes for a vector and point
// By: Nick from CoffeeBeforeArch

// A point class that contains a single coordinate pair
class point {
 private:
  double x;
  double y;

 public:
  void update(double new_x, double new_y);
  void print();
};

// A vector class that has coordinates as point objects
class vector {
 private:
  point start;
  point end;

 public:
  vector();
  vector(double x1, double y1, double x2, double y2);
  void update(double x1, double y1, double x2, double y2);
  void print();
};
