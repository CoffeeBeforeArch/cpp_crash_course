// This program shows off the new lambdas in the C++11 standard
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Simple structure for buildings
struct building {
  string name;
  int height;

  // Simple constructor
  building(string s, int h) {
    name = s;
    height = h;
  }
};

int main() {
  /*
   * Why Lambdas?
   * Concise way of defining function object passed to STL
   * algorithms
   * Can create a function with naming it
   */

  // Minimal lambda that take no parameters, and just prints
  // something
  [] { cout << "Hello, lambda!" << endl; }();
  cout << endl;

  // We can also assign lambdas to a variable
  auto print_lambda = [] { cout << "Hello, lambda!" << endl; };

  // Call it like a function
  print_lambda();
  cout << endl;

  // We can pass parameters to lambdas
  const string some_string("Some constant string");

  // Pass the string to the lambda that returns a double
  auto parameter_lambda = [](const string &s) -> double {
    cout << s << endl;
    return 123.456;
  };

  // Call it like a function with a parameter and return value
  double some_num = parameter_lambda(some_string);

  // Print out the returned number
  cout << some_num << endl;
  cout << endl;

  // You can use captures to access variables of outer scope not
  // passed as an argument
  int a = 5;
  int b = 10;

  // Print out or caputred variables
  cout << "a = " << a << ", b = " << b << endl;
  cout << endl;

  // "a" is read-only, "b" is passed by reference
  auto capture_lambda = [=, &b] {
    // Valid because not read only
    b++;
  };

  // Call the lambda
  capture_lambda();

  // Print out or caputred variables
  cout << "a = " << a << ", b = " << b << endl;
  cout << endl;

  // And now for more interesting example!
  // Sorting custom objects!
  vector<building> buildings{building("Bank", 234), building("Monument", 542),
                             building("Skyscraper", 808),
                             building("Library", 145), building("Office", 200)};

  // Print out the unsorted list of objects
  cout << "Pre-sort" << endl;
  for (const auto &s : buildings) {
    cout << "Building name: " << s.name << " Building height: " << s.height
         << endl;
  }
  cout << endl;

  // Create a sorting rule
  auto sort_rule = [](const building &b1, const building &b2) -> bool {
    return b1.height < b2.height;
  };

  // Call std::sort on our custom objct
  sort(buildings.begin(), buildings.end(), sort_rule);

  // Print out the list post-sort
  cout << "Post-sort" << endl;
  for (const auto &s : buildings) {
    cout << "Building name: " << s.name << " Building height: " << s.height
         << endl;
  }

  return 0;
}
