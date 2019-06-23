// This program show off sequential containers in the C++ Standard
// Library
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

template <typename T>
void print_container(T a){
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    // Arrays are fixed-size containers
    // Specify a type and size
    // Has fast random access
    array<int, 10> int_array = {9,4,3,8,7,0,9,7,4,6};

    // Print the array, sort it, and print again
    cout << "Array: " << endl;
    print_container(int_array);
    sort(int_array.begin(), int_array.end());
    print_container(int_array);
    cout << endl;

    // Vectors are a flexible-size array (strings are similar)
    // Specify a type
    // Has fast random access, but adding elements to a position other
    // than the back may be slow
    // Use vector unless you have a reason to use another container
    vector<int> int_vector;
    for(int i = 0; i < 10; i++){
        int_vector.push_back(i * i);
    }

    // Print the vector, remove back elements, then print again
    cout << "Vector" << endl;
    print_container(int_vector);
    int_vector.pop_back();
    int_vector.pop_back();
    int_vector.pop_back();
    print_container(int_vector);
    cout << endl;

    // Forward lists and Lists are singly and doubly linked lists
    // respectively
    // Specify a type
    // Fast insert/delete at any point in the list
    list<int> int_list;
    for(int i = 0; i < 5; i++){
        int_list.push_back(i);
    }

    // Print the list
    // Insert some elements at different positions, then print again
    cout << "List" << endl;
    print_container(int_list);
    auto itr = int_list.begin();
    int_list.insert(itr, 5);
    print_container(int_list);
    int_list.insert(itr, 6);
    print_container(int_list);
    int_list.insert(int_list.begin(), 7);
    print_container(int_list);
    cout << endl;

    // Benefit of list is that we can traverse backwards
    itr = int_list.end();
    itr--;
    cout << *itr << endl;

    return 0;
}
