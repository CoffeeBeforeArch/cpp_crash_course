// This program implements a basic singly linked list in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main(){
    // Create a new linked list
    LinkedList ll;

    // Insert a few nodes, alternating at head and tail
    for(int i = 0; i < 5; i++){
        if(i % 2){
            // insert at head on odd numbers
            ll.insert_head(i);
        }else{
            // Insert at tail on even numbers
            ll.insert_tail(i);
        }
    }

    // Insert at the beginning of the list
    ll.insert_position(5, 2);

    // Delete the element we just put in
    ll.delete_position(2);

    // Delete the head
    ll.delete_head();

    // Delete the tail
    ll.delete_tail(); 

    return 0;
}
