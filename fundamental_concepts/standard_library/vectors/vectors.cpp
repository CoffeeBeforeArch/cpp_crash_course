// This program shows off vectors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  // Declare a vector that expands with integers
  // More on templates (<int>) later
  vector<int> v1;

  for (int i = 0; i < 10; i++) {
    // Method for expanding the vector
    v1.push_back(i);
  }

  // Print the vector
  print_vector(v1);

  // Print the first element
  cout << "First element: " << v1.front() << endl;

  // Print the last element
  cout << "Last element: " << v1.back() << endl;

  // Print the first element using array-like indexing
  cout << "First element using array-like indexing: " << v1[0] << endl;

  // Clear a vector and print out it's size
  v1.clear();
  cout << "Cleared vector size is: " << v1.size() << endl;

  // Resize the vector and print size and vector
  v1.resize(10);
  cout << "Re-sized vector size is: " << v1.size() << endl;
  print_vector(v1);

  // Re-initialize vector
  for (int i = 0; i < 10; i++) {
    // Method for expanding the vector
    v1.at(i) = i;
  }

  // Insert into the vector before a chosen position
  v1.insert(v1.begin() + 4, 5);
  print_vector(v1);

  // Erase an element at a specific position
  v1.erase(v1.begin() + 4);
  print_vector(v1);

  // Erase the end element
  v1.pop_back();
  print_vector(v1);

  return 0;
}
