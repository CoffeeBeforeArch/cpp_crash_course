// This file contains the interface for a point class in C++
// By: Nick from CoffeeBeforeArch

// Use a template similar to a function
template <typename T>
class Point {
 private:
  T x;
  T y;

 public:
  Point(const T u, const T v) : x(u), y(v) {}
  T getX() { return x; }
  T getY() { return y; }
};
