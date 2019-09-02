// This program can be used to show off the record feature in GDB
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  // Number of numbers to add together
  int N = 10;
  int *sum = new int[1];
  int temp;

  // Add random numbers together in a loop
  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    temp = rand() % 100;
    sum[0] += temp;
  }

  // Print out the result
  cout << "The sum is " << sum[0] << endl;

  return 0;
}
