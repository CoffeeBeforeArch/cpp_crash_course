// This program shows a simple way to implement selection sort in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

void selection_sort(std::vector<int> &v) {
  // Find the the min element for each index...
  // (Note the final element is already in the correct place)
  for (auto i = 0u; i < v.size() - 1; ++i) {
    // By comparing to all later indices
    unsigned min_index = i;
    for (auto j = i + 1; j < v.size(); j++) {
      // And keeping track of the index of the smallest value
      min_index = (v[min_index] <= v[j] ? min_index : j);
    }

    // Only swap if it's a new index 
    if (i != min_index) std::swap(v[i], v[min_index]);
  }
}

int main() {
  // Number of elements to sort
  const unsigned N = 20;

  // Our vector to sort
  std::vector<int> v(N);

  // Set up our random number generator
  std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<int> dist(0, 255);

  // Generate our random inputs
  std::generate(begin(v), end(v), [&]() { return dist(rng); });

  // Dump the potentially unsorted contents
  std::cout << "Before: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  // Sort the vector
  selection_sort(v);

  // Dump the sorted contents
  std::cout << "After: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}
