// This program shows off the basics of vectors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  // Vectors can expand/contract, so we don't need to specify a size
  // ahead of time
  vector<int> v1;

  // Similar to arrays, there is a method for getting the size
  cout << "Vector size: " << v1.size() << '\n';

  // There is also a method for getting the capacity
  // Because an array is fixed-size, it's size is always equal to the
  // capacity, therefore it does not need a capacity method
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // To add new elements to a vector, we can use two methods:
  //  push_back()
  //  emplace_back()
  v1.push_back(1);
  v1.emplace_back(2);

  // What are the size and capacity now? Both are 2!
  // We added two numbers to the vector, and the vector took care of
  // allocating space for us.
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // What happes if we push_back, or emplace_back another integer?
  //  size = 3, and capacity = 4
  // Why are they no longer equal? Dynamic allocation is expensive, so
  // we want to avoid it where we can. Instead of allocating space for
  // 1 new element on every push/emplace_back(), vector allocates
  // exponentially (e.g. 1, 2, 4, 8, 16, ...).
  v1.push_back(3);
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // But we don't have to rely on exponential allocation, we can just
  // also just specify how much space we want. (This will not change the size of
  // the vector)
  v1.reserve(100);
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // If we've allocated more than we need, we can shrink the container
  v1.shrink_to_fit();
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // We can also resize the container, which can change both the size and
  // capacity
  v1.resize(10, 5);
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';

  // We can use iterators, reverse iterators, and range-based for loops (just
  // like arrays)!
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << '\n';

  // If we re-size with a smaller value, we chop off part of our vector
  v1.resize(5);
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << '\n';

  // We can use pop_back to get rid of the last element
  v1.pop_back();
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << '\n';

  // We can also get rid of a particular element using erase and iterators
  v1.erase(begin(v1));
  cout << "Vector size: " << v1.size() << '\n';
  cout << "Vector capacity: " << v1.capacity() << '\n';
  for (auto i : v1) {
    cout << i << " ";
  }
  cout << '\n';

  // We can access vectors just like arrays (indexing)
  cout << "v1[0] = " << v1[0] << ", v1[1] = " << v1[1] << ", v1[2] = " << v1[2]
       << '\n';

  // We can also access using the "at"
  cout << "v1.at(0) = " << v1.at(0) << ", v1.at(1) = " << v1.at(1)
       << ", v1.at(2) = " << v1.at(2) << '\n';

  return 0;
}
