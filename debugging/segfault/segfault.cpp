// This program is for use in examining how to debug intermittent
// segfaults in using GDB
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Swaps to elements in memory
// Takes memory locations a and b as arguments
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Performs bubble sort
// Takes an array and its length as arguments
void bubble_sort(int *array, int n) {
  // Skips trivial last iteration
  for (int i = 0; i < n - 1; i++) {
    // Propagate largest remaining element to the top
    // Remove "i" sorted elements each iteration
    for (int j = 0; j < n - 1 - i; j++) {
      if (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}

int main() {
  // Allocate an array
  int array[32];

  // Set the seed
  srand(time(NULL));

  // Initialize the array
  int N = rand() % sizeof(array);
  for (int i = 0; i < N; i++) {
    array[i] = rand();
  }

  // Call bubble sort
  bubble_sort(array, 32);

  return 0;
}
