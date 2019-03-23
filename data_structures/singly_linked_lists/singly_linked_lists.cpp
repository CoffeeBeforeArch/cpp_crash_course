// This program implements a basic singly linked list in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main(){
    // Create a new linked list
    LinkedList ll;

    // Insert 5 nodes into the list (alternate head and tail)
    for(int i = 0; i < 5; i++){
        if(i % 2){
            ll.insert_head(i);
        } else{
            ll.insert_tail(i);
        }
    }

    return 0;
}
