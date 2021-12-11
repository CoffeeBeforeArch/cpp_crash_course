// An example of structured bindings in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  // Create an unordered map with a few elements
  std::unordered_map<std::string, int> my_map;
  my_map["dog"] = 1;
  my_map["cat"] = 2;

  // Iterate over the container using structured bindings
  for (auto [key, value] : my_map) {
    std::cout << "Key: " << key << " Value: " << value << '\n';
  }

  return 0;
}
