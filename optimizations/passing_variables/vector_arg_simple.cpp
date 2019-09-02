// This program shows the importance of understanding how function
// arguments are passed in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Load number using pass-by-value
// Uses copy constructor in
vector<int> load_numbers_value(vector<int> v) {
  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);
  }

  // Return the vector
  // Uses automatic move on return for pass-by-value param.
  return v;
}

// Load number using pass-by-rvalue-ref (no move out)
// No copy constructor!
vector<int> load_numbers_rvalue_ref_1(vector<int>&& v) {
  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);
  }

  // Return the vector
  // No longer a by-value parameter, so it uses a copy constructor!
  // Returns with a fitted capacity!
  return v;
}

// Load number using pass-by-rvalue-ref (move out)
// No copy constructor!
vector<int> load_numbers_rvalue_ref_2(vector<int>&& v) {
  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);
  }

  // Return the vector
  // Explicitly use the move constructor
  return move(v);
}

// Load number using pass-by-ref
void load_numbers_ref(vector<int>& v) {
  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);
  }
}

int main(int argc, char* argv[]) {
  // Create a new vector
  vector<int> v;

  // Do this step 10x
  for (int i = 0; i < 10; i++) {
    // clear the array each time
    v.clear();

    // Load a new set of numbers
    v = load_numbers_value(v);
    // v = load_numbers_rvalue_ref_1(move(v));
    // v = load_numbers_rvalue_ref_2(move(v));
    // load_numbers_ref(v);
  }

  return 0;
}
