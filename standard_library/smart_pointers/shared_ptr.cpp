// This program shows off the Class shared_ptr in the standard library
// By: Nick from CoffeeBeforeArch

#include <memory>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // We can declare a 
    shared_ptr<int> p1;
    shared_ptr<int> p2(nullptr);

    shared_ptr<int> p3(new int);
    shared_ptr<int> p4(new int, default_delete<int>());


}
