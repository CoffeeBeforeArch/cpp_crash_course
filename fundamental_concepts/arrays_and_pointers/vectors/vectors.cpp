// This program shows off the basics of vectors in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  // Vectors can expand/contract, so we don't need to specify a size
  // ahead of time
  vector<int> v1;

  // Similar to arrays, there is a method for getting the size
  cout << "Vector size: " << v1.size() << endl;

  // There is also a method for getting the capacity
  // Because an array is fixed-size, it's size is always equal to the
  // capacity, therefore it does not need a capacity method
  cout << "Vector capacity: " << v1.capacity() << endl;

  // To add new elements to a vector, we can use two methods:
  //  push_back()
  //  emplace_back()
  v1.push_back(1);
  v1.emplace_back(2);

  // What are the size and capacity now? Both are 2!
  // We added two numbers to the vector, and the vector took care of
  // allocating space for us.
  cout << "Vector size: " << v1.size() << endl;
  cout << "Vector capacity: " << v1.capacity() << endl;

  // What happes if we push_back, or emplace_back another integer?
  //  size = 3, and capacity = 4
  // Why are they no longer equal? Dynamic allocation is expensive, so
  // we want to avoid it where we can. Instead of allocating space for
  // 1 new element on every push/emplace_back(), vector allocates
  // exponentially (e.g. 1, 2, 4, 8, 16, ...).
  v1.push_back(3);
  cout << "Vector size: " << v1.size() << endl;
  cout << "Vector capacity: " << v1.capacity() << endl;

  // But we don't have to rely on exponential allocation, we can just
  // also just specify how much space we want;
  v1.reserve(100);
  cout << "Vector size: " << v1.size() << endl;
  cout << "Vector capacity: " << v1.capacity() << endl;

  // We can access vectors just like arrays (indexing)
  cout << "v1[0] = " << v1[0] << ", v1[1] = " << v1[1] << ", v1[2] = " << v1[2]
       << endl;
  
  return 0;
}
