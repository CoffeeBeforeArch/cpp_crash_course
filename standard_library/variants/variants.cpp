// This program shows off the basics of variants in C++17
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>
#include <variant>

using namespace std;

int main() {
  // Variants are type-safe unions
  // Unlike unions, variants know what type they currently hold
  variant<int, float> v, w;

  // Set v to have an int
  // We can not call get<int> on v
  // get<float> will be an error
  v = 12;

  // We can also set variants in a number of ways
  // Get the int from v
  w = get<int>(v);
  // Get the int at position 0
  w = get<0>(v);
  // Just use assignment and ignore get
  w = v;

  // Indexing our of bounds, or using an type that doesn't exist in
  // the vaiant will throw an error
  try {
    // This will clearly fail because int is active
    get<float>(w);
  } catch (const bad_variant_access&) {
    cout << "The float field isn't active right now!" << endl;
  }

  return 0;
}
