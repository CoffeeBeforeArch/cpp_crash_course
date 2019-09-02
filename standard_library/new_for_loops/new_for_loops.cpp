// This program shows off new ways of implementing for loops in C++11
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Do for-each on interger elements
  for (int i : {1, 2, 3, 4, 5, 6}) {
    cout << i << " ";
  }
  cout << endl;

  // Create an integer vector to iterate over
  vector<int> int_vector;
  int temp;

  // Fill the vector with random values
  for (unsigned i = 0; i < 6; i++) {
    temp = rand() % 100;
    cout << temp << " ";
    int_vector.push_back(temp);
  }
  cout << endl;

  // Use an auto type for each vector element
  for (auto &i : int_vector) {
    // Increment each element in the vector
    i++;
  }

  // Print out the new vector
  for (unsigned i = 0; i < int_vector.size(); i++) {
    cout << int_vector[i] << " ";
  }
  cout << endl;
}
