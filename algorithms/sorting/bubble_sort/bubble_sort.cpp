// This program shows a simple way to implement bubble sort in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

// A simple implementation of bubble sort
void bubble_sort(std::vector<int> &v) {
  // For N-1 elements...
  for(auto i = 0u; i < v.size() - 1; i++) {
    // Bubble up the largest element to the correct position
    for(auto j = 0u; j < v.size() - i - 1u; j++) {
      if(v[j] > v[j + 1]) std::swap(v[j], v[j + 1]);
    }
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
  bubble_sort(v);

  // Dump the sorted contents
  std::cout << "After: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}
