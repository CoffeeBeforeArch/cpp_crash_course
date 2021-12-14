// A basic use of lambdas in C++
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
  // Create a lambda for comparing two integers
  auto compare_ints = [](int a, int b) { return a > b; };

  // Create a vector with "random" numbers
  std::vector<int> my_vec{10, 2, 4, 15, 6, 5};
  print(my_vec);

  // Sort using our lambda
  std::sort(my_vec.begin(), my_vec.end(), compare_ints);
  print(my_vec);

  return 0;
}
