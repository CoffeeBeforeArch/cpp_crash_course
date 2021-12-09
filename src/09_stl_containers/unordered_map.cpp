// This program shows off the basics of an unordered set in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  // Create a map of strings to ints
  std::unordered_map<std::string, int> umap;

  // Add a few entries
  umap["Orange"] = 10;
  umap["Red"] = 5;
  umap["Blue"] = 7;

  // Print the entries
  for (auto [key, value] : umap) {
    std::cout << "Key: " << key << ", Value: " << value << '\n';
  }

  return 0;
}
