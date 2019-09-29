// This program shows off the basics of iterators in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create a simple vector of integers
  vector<int> int_vec;
  for (int i = 0; i < 10; i++) {
    int_vec.push_back(i);
  }

  // While we can index into a vector like an array, we can use
  // iterators as a more general mechanism
  // Let's decalare one for our vector
  vector<int>::iterator itr_begin;
  vector<int>::iterator itr_end;

  // When going over a vector, we typically care about start and end
  // points. We can get these directly from our declared vector
  itr_begin = int_vec.begin();
  itr_end = int_vec.end();

  // We can use these as the bounds for a for loop
  for (auto i = int_vec.begin(); i != int_vec.end(); i++) {
    // Dereference the iterator just like a pointer
    cout << *i << " ";
  }
  cout << endl;

  // Reverse iterators work backwards
  for (auto i = int_vec.rbegin(); i != int_vec.rend(); i++) {
    cout << *i << " ";
  }
  cout << endl;

  return 0;
}
