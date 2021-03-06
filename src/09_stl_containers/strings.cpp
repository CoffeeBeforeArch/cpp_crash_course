// This program shows off strings in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <string>

int main() {
  // Declare a new string
  std::string str1;

  // Unlike C-strings, these don't have to be constant!
  str1 = "This is an example string!\n";

  // Print out the first string
  std::cout << str1;

  // Declare and initialize another string
  std::string str2 = "This is another string!\n";

  // Swap the two strings and print
  str1.swap(str2);
  std::cout << "Swapped string 1: " << str1;
  std::cout << "Swapped string 2: " << str2;

  // Replace all the characters with 'a' and print
  for (unsigned i = 0; i < str1.size(); i++) str1.at(i) = 'a';
  std::cout << str1 << '\n';

  // Print out string size and capacity
  std::cout << "Size: " << str1.size() << '\n';
  std::cout << "Capacity: " << str1.capacity() << '\n';

  // Re-size the string to 5 characters and print size and capacity
  str1.resize(5);
  std::cout << str1 << '\n';
  std::cout << "Size: " << str1.size() << '\n';
  std::cout << "Capacity: " << str1.capacity() << '\n';

  // Call shrink to fit to match the number of characters
  str1.shrink_to_fit();
  std::cout << str1 << '\n';
  std::cout << "Size: " << str1.size() << '\n';
  std::cout << "Capacity: " << str1.capacity() << '\n';

  return 0;
}
