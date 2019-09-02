// This program shows off the sever implications of false sharing in
// C++ using std::atomic and std::thread

#include <atomic>
#include <iostream>
#include <thread>

using namespace std;

// Simple function for incrememnting an atomic int
void work(atomic<int>& a) {
  for (int i = 0; i < 10000; i++) {
    a++;
  }
}

// Simple single-threaded function that calls work 4 times
void single_thread() {
  atomic<int> a;
  a = 0;

  work(a);
  work(a);
  work(a);
  work(a);
}

// Tries to parallelize the work across multiple threads
// However, each core invalidates the other cores copies on a write
// This is an EXTREME example of poorly thought out code
void same_var() {
  atomic<int> a;
  a = 0;

  // Create four threads and use a lambda to launch work
  thread t1([&]() { work(a); });
  thread t2([&]() { work(a); });
  thread t3([&]() { work(a); });
  thread t4([&]() { work(a); });

  // Join the threads
  t1.join();
  t2.join();
  t3.join();
  t4.join();
}

// How well does it work if we use different atomic ints?
// Not that well! But look at the addresses! They all reside on the
// same cache line. That means we have false sharing!
// (We invalidate variables that aren't actually being accessed
// because they happen to be on the same cache line)
void diff_var() {
  atomic<int> a;
  a = 0;
  cout << "Address of a: " << &a << endl;
  atomic<int> b;
  b = 0;
  cout << "Address of b: " << &b << endl;
  atomic<int> c;
  c = 0;
  cout << "Address of c: " << &c << endl;
  atomic<int> d;
  d = 0;
  cout << "Address of d: " << &d << endl;

  // Creat four threads and use lambda to launch work
  thread t1([&]() { work(a); });
  thread t2([&]() { work(b); });
  thread t3([&]() { work(c); });
  thread t4([&]() { work(d); });

  // Join the threads
  t1.join();
  t2.join();
  t3.join();
  t4.join();
}

// Simple fix, just make sure we can't get two atomics on the same
// cache line
struct alignas(64) aligned_type {
  atomic<int> a;
};

// No more invalidations, so our code should be roughly the same as the
void diff_line() {
  aligned_type a;
  a.a = 0;
  cout << "Address of a: " << &a << endl;
  aligned_type b;
  b.a = 0;
  cout << "Address of b: " << &b << endl;
  aligned_type c;
  c.a = 0;
  cout << "Address of c: " << &c << endl;
  aligned_type d;
  d.a = 0;
  cout << "Address of d: " << &d << endl;

  // Launch the four threads now using our aligned data
  thread t1([&]() { work(a.a); });
  thread t2([&]() { work(b.a); });
  thread t3([&]() { work(c.a); });
  thread t4([&]() { work(d.a); });

  // Join the threads
  t1.join();
  t2.join();
  t3.join();
  t4.join();
}

int main() {
  single_thread();
  // same_var();
  // diff_var();
  // diff_line();
  return 0;
}
