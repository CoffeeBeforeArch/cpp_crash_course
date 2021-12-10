// A simple example of atomics
// By: Nick from CoffeeBeforeArch

#include <atomic>
#include <iostream>
#include <thread>

// A simple print method for each thread to run
void inc_10k(std::atomic<int> &a) {
  for (int i = 0; i < 10000; i++) a++;
}

int main() {
  // Create and atomic in
  std::atomic<int> a{0};

  // Create some threads
  // Warning: The prints can be interleaved!
  std::thread t0(inc_10k, std::ref(a));
  std::thread t1(inc_10k, std::ref(a));

  // Join the threads
  t0.join();
  t1.join();

  // Print the results
  std::cout << "Results from incrementing 20,000 times is: " << a << '\n';

  return 0;
}
