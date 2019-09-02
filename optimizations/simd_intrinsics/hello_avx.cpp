// This program shows off the basics of using Intel AVX intrinsics in
// C++
// By: Nick from CoffeeBeforeArch

#include <immintrin.h>
#include <iostream>

using namespace std;

int main() {
  // Create two 256-bit arguments (8 floats)
  // "ps" stands for packed single precision (aka floats)
  __m256 evens = _mm256_set_ps(2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0);
  __m256 odds = _mm256_set_ps(1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0);

  // Compute the difference of the two vectors with a single operation
  // Format: _mm<bit_width>_<name>_<data_type>
  __m256 result = _mm256_sub_ps(evens, odds);

  // Cast the result pointer to floats
  float *f = (float *)&result;

  // Print the result
  cout << "Result: ";
  for (int i = 0; i < 8; i++) {
    cout << f[i] << " ";
  }
  cout << endl;

  return 0;
}
