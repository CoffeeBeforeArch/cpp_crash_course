// This program shows off the basics of a deque in C++
// By: Nick from CoffeeBeforeArch

#include <deque>
#include <iostream>
#include <string>

int main() {
  // Create a map of strings to ints
  std::deque<std::string> my_deque;

  // Add a few entries
  my_deque.push_front("Orange");
  my_deque.push_back("Red");
  my_deque.push_front("Blue");

  // Print the entries (front to back)
  std::cout << "Deque front to back\n";
  for (auto s : my_deque) {
    std::cout << "Deque item: " << s << '\n';
  }
  std::cout << '\n';

  // Print the entries (back to front)
  std::cout << "Deque back to front\n";
  for (auto r_iter = rbegin(my_deque); r_iter != rend(my_deque); r_iter++) {
    std::cout << "Deque item: " << *r_iter << '\n';
  }

  return 0;
}
