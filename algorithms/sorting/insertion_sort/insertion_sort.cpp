// This program shows a simple way to implement insertion sort in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

void insertion_sort(std::vector<int> &v) {
  // For each element to insert...
  for (auto i = 1u; i < v.size(); i++) {
    // Find it's place withing the sorted sub-array
    // i == 0 omitted (single element is always sorted)
    int j = i;
    while (j > 0 && v[j - 1] > v[j]) {
      std::swap(v[j - 1], v[j]);
      j--;
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
  insertion_sort(v);

  // Dump the sorted contents
  std::cout << "After: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}
