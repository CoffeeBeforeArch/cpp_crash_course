// A simple reduce example using C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <numeric>
#include <vector>

int main() {
  // Create a vector
  std::vector<int> my_vec{10, 2, 4, 15, 6, 5};

  // Reduce the elements in the vector
  int sum = std::reduce(my_vec.begin(), my_vec.end());

  // Print the result
  std::cout << "The sum of elements of the vector is: " << sum << '\n';

  return 0;
}
