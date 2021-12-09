// A simple sorting example using C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <vector>

// Helper function to print a vector
void print(std::vector<int> a) {
  for (auto val : a) std::cout << val << ' ';
  std::cout << '\n';
}

int main() {
  // Create an array
  std::vector<int> my_vec {10, 2, 4, 15, 6, 5};
  
  // Print out "Before" vector
  print(my_vec);

  // Sort and print the array
  std::ranges::sort(my_vec);
  print(my_vec);

  return 0;

}
