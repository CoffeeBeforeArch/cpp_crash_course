// This program shows off the return value optimization in C++
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Simple wrapper around a string object
struct MyString {
  string s;
  MyString(string s1) : s(s1) {}
  // If we copy, we want to know, so print something
  MyString(const MyString &s2) {
    cout << "Copying the string!" << endl;
    s = s2.s;
  }
};

// This function benefits from RVO
// Functions with return values secretly have 1 argument
// (where to store the return value).
// If we know ahead of time what is going to be returned, don't
// make a local version and copy it, make the string where it will
// be copied in the first place.
MyString rvo() {
  MyString ms("Hey there!");
  return ms;
}

// This function does not benefit from RVO
// Which string we return depends on a condition, therefore can't be
// known ahead of time.
// Therefore we have to copy the object on a return
MyString no_rvo(int condition) {
  MyString ms_1("Hi, fella!");
  MyString ms_2("Ahoy!");

  // Can't know which string will be returned ahead of time, so
  // we can't elide the copy.
  if (condition) {
    return ms_1;
  } else {
    return ms_2;
  }
}

int main() {
  // Set the seed and set the condition to 1 or 0
  srand(time(NULL));
  int condition = rand() % 2;

  // Get the string with RVO
  cout << "Getting a string with RVO" << endl;
  MyString s1 = rvo();

  // Get the string without RVO
  cout << "Getting a string without RVO" << endl;
  MyString s2 = no_rvo(condition);

  // Print the strings
  cout << "String 1: " << s1.s << endl;
  cout << "String 2: " << s2.s << endl;

  return 0;
}
