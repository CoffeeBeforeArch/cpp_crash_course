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
vector<int> load_numbers_value(vector<int> v, int iter) {
  // Print out the size and capacity on a specific iteration
  if (iter) {
    cout << "From function: load_numbers_value" << endl;
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
  }

  // Keep track of allocations
  int allocations = 0;
  int prev = v.capacity();

  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);

    // Check to see if we re-allocated anything
    if (v.capacity() > prev) {
      prev = v.capacity();
      allocations++;
    }
  }

  // Print the number of allocations and capacity
  if (iter) {
    cout << "Loading 1000 numbers required " << allocations
         << " dynamic allocations" << endl;
    cout << "Ending capacity was: " << v.capacity() << endl << endl;
  }

  // Return the vector
  // Uses automatic move on return for pass-by-value param.
  return v;
}

// Load number using pass-by-rvalue-ref (no move out)
// No copy constructor!
vector<int> load_numbers_rvalue_ref_1(vector<int>&& v, int iter) {
  // Print out the size and capacity on a specific iteration
  if (iter) {
    cout << "From function: load_numbers_rvalue_ref_1" << endl;
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
  }

  // Keep track of allocations
  int allocations = 0;
  int prev = v.capacity();

  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);

    // Check to see if we re-allocated anything
    if (v.capacity() > prev) {
      prev = v.capacity();
      allocations++;
    }
  }

  // Print the number of allocations and capacity
  if (iter) {
    cout << "Loading 1000 numbers required " << allocations
         << " dynamic allocations" << endl;
    cout << "Ending capacity was: " << v.capacity() << endl << endl;
  }

  // Return the vector
  // No longer a by-value parameter, so it uses a copy constructor!
  // Returns with a fitted capacity!
  return v;
}

// Load number using pass-by-rvalue-ref (move out)
// No copy constructor!
vector<int> load_numbers_rvalue_ref_2(vector<int>&& v, int iter) {
  // Print out the size and capacity on a specific iteration
  if (iter) {
    cout << "From function: load_numbers_rvalue_ref_2" << endl;
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
  }

  // Keep track of allocations
  int allocations = 0;
  int prev = v.capacity();

  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);

    // Check to see if we re-allocated anything
    if (v.capacity() > prev) {
      prev = v.capacity();
      allocations++;
    }
  }

  // Print the number of allocations and capacity
  if (iter) {
    cout << "Loading 1000 numbers required " << allocations
         << " dynamic allocations" << endl;
    cout << "Ending capacity was: " << v.capacity() << endl << endl;
  }

  // Return the vector
  // Explicitly use the move constructor
  return move(v);
}

// Load number using pass-by-ref
void load_numbers_ref(vector<int>& v, int iter) {
  // Print out the size and capacity on a specific iteration
  if (iter) {
    cout << "From function: load_numbers_ref" << endl;
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
  }

  // Keep track of allocations
  int allocations = 0;
  int prev = v.capacity();

  // Load the vector with 1k values
  for (int i = 0; i < 1000; i++) {
    v.push_back(i);

    // Check to see if we re-allocated anything
    if (v.capacity() > prev) {
      prev = v.capacity();
      allocations++;
    }
  }

  // Print the number of allocations and capacity
  if (iter) {
    cout << "Loading 1000 numbers required " << allocations
         << " dynamic allocations" << endl;
    cout << "Ending capacity was: " << v.capacity() << endl << endl;
  }
}

int main(int argc, char* argv[]) {
  if (argc == 1) {
    return 0;
  }

  // Convert the input to an integer
  string arg = argv[1];
  size_t pos;
  int iter = stoi(arg, &pos);

  // Create a new vector
  vector<int> v;

  // Do this step 10x
  for (int i = 0; i < 10; i++) {
    // Print size and capacity before clear
    if (i == iter) {
      cout << "From function: main" << endl;
      cout << "Before clear:" << endl;
      cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    }

    // clear the array each time
    v.clear();

    // Print size and capacity after clear
    if (i == iter) {
      cout << "After clear:" << endl;
      cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    }

    // Print?
    int tmp = i == iter ? 1 : 0;

    // Load a new set of numbers
    v = load_numbers_value(v, tmp);
    // v = load_numbers_rvalue_ref_1(move(v), tmp);
    // v = load_numbers_rvalue_ref_2(move(v), tmp);
    // load_numbers_ref(v, tmp);
  }

  return 0;
}
