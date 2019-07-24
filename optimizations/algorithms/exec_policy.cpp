// This program shows off how to specify the execution mode for STL
// algorithms introduced in C++17
// By: Nick from CoffeeBeforeArch

#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <execution>

using namespace std;

int main(){
    // Set the seed
    srand(time(NULL));

    // Number of elements
    int N = 1 << 13;

    // Vector for sorting etc
    vector<int> v;
    for(int i = 0; i < N; i++){
        v.push_back(rand() % N);
    }

    // Let's try different execution modes for our loop
    for_each(execution::seq, v.begin(), v.end(), [](int &n){n++; });

    return 0;
}
