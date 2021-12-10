// A simple example of C++11 threads
// By: Nick from CoffeeBeforeArch

#include <thread>
#include <iostream>

// A simple print method for each thread to run
void print(int tid) {
  std::cout << "Printing from thread: " << tid << '\n';
}

int main() {
  // Create some threads
  // Warning: The prints can be interleaved!
  std::thread t0(print, 0);
  std::thread t1(print, 1);

  // Join the threads
  t0.join();
  t1.join();

  return 0;
}
