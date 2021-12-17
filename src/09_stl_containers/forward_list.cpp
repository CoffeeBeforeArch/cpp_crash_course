// This program shows off the basics of an unordered set in C++
// By: Nick from CoffeeBeforeArch

#include <forward_list>
#include <iostream>
#include <string>

int main() {
  // Create a map of strings to ints
  std::forward_list<std::string> my_forward_list;

  // Add a few entries
  my_forward_list.push_front("Orange");
  my_forward_list.push_front("Red");
  my_forward_list.push_front("Blue");

  // Print the entries (front to back)
  for (auto s : my_forward_list) {
    std::cout << "Forward list item: " << s << '\n';
  }

  return 0;
}
