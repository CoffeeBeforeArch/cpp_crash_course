// This program shows of smart pointers from the C++11 Standard
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <memory>

using namespace std;

int main(){
    // Create a shared pointer
    // Shared pointers are valid while at LEAST one shared pointer
    // points to the data. The last pointer frees it
    shared_ptr<int> shared_int_1(new int(5));
    shared_ptr<int> shared_int_2 = shared_int_1;

    // Create a weak pointer
    // Weak pointers point to memory, but are not an "owner"
    // Good when we don't want an owner, or handling cyclic references
    weak_ptr<int> weak_int = shared_int_1;

    // Create a unique pointer
    // Unique pointers, but are the only owner of the memory it points to
    // Good for exclusive ownership
    unique_ptr<int> unique_int(new int(10));

    return 0;
}
