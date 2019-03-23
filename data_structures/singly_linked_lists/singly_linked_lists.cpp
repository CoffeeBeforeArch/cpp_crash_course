// This program implements a basic singly linked list in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main(){
    // Create a new linked list
    LinkedList ll;

    // Insert a node at the head
    ll.insert_head(5);

    // Insert a node at the tail
    ll.insert_tail(3);

    // Insert a node at position 1
    ll.insert_position(7, 1);

    return 0;
}
