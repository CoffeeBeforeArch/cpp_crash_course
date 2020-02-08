// This program shows a simple way to implement quick sort in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

// Partition the subvector around the pivot
int partition(std::vector<int> &v, int left, int pivot) {
  // Marks left side of the partition
  int low = left - 1;

  // One below the highest index
  int high = pivot - 1;

  // For all the elements in the subvector (besides the pivot)
  for (int i = left; i <= high; i++) {
    // If the element goes into the left hand side
    if (v[i] <= v[pivot]) {
      // Swap into the left-hand side
      low++;
      std::swap(v[low], v[i]);
    }
  }

  // Swap the pivot element into the correct spot
  std::swap(v[low + 1], v[pivot]);

  // Redurn the index of the sorted pivot element
  return low + 1;
}

// Place one element element in sorted order, and do the same for each side of
// the element
void quicksort(std::vector<int> &v, int left, int pivot) {
  // No more elements in the subvector
  if (left < pivot) {
    // Sort a single element
    int new_pivot = partition(v, left, pivot);

    // Call quicksort on the elements surrounding the sorted element
    quicksort(v, left, new_pivot - 1);
    quicksort(v, new_pivot + 1, pivot);
  }
}

int main() {
  // Number of elements to sort
  const unsigned N = 10;

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
  quicksort(v, 0, N - 1);

  // Dump the sorted contents
  std::cout << "After: ";
  for (auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}
