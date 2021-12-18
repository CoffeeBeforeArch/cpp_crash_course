// This program shows off the basics of a list in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <list>
#include <string>

int main() {
  // Create a map of strings to ints
  std::list<std::string> my_list;

  // Add a few entries
  my_list.push_front("Orange");
  my_list.push_back("Red");
  my_list.push_front("Blue");

  // Print the entries (front to back)
  std::cout << "List front to back\n";
  for (auto s : my_list) {
    std::cout << "List item: " << s << '\n';
  }
  std::cout << '\n';

  // Print the entries (back to front)
  std::cout << "List back to front\n";
  for (auto r_iter = rbegin(my_list); r_iter != rend(my_list); r_iter++) {
    std::cout << "List item: " << *r_iter << '\n';
  }

  return 0;
}
