// This file implements the methods of the 'LinkedList' class
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

// Add node at head
void LinkedList::insert_head(int d){
    // Create a new node with data value 'd'
    Node *new_head = new Node(d);

    // Insert at the front of the list
    new_head->next = head;
    head = new_head;

    cout << "Head insert with data: " << d << endl;
    print_list();
}

// Add node at position 'p' in list
// Position 'p' must exist in the list
void LinkedList::insert_position(int d, int p){
    // Create a new node with data value 'd'
    Node *new_node = new Node(d);

    // Set head = new_node if list is empty and p == 0
    // Otherwise perform normal insertion
    if(head == NULL){
        // Check if head insertion
        // Otherwise it is an invalid operation
        if(p == 0){
            head = new_node;
        }else{
            assert(head == NULL && p == 0);
        }
    }else{
        // Walk the list to get to the entry point for new node
        Node *temp = head;
        Node *prev = NULL;
        for(int i = 0; i < p; i++){
            // Check if insertion point is past potential new tail
            assert(temp != NULL);
            // Update previous node and current node
            prev = temp;
            temp = temp->next;
        }
        // Check if this is actually head insertion
        // Otherwise perform normal insertion
        if(prev == NULL){
            head = new_node;
            head->next = temp;
        }else{
            new_node->next = prev->next;
            prev->next = new_node;
        }
    }

    cout << "Position " << p <<  " insert with data: " << d << endl;
    print_list();
}

// Add node at tail
void LinkedList::insert_tail(int d){
    // Create new node with value 'd'
    Node *new_tail = new Node(d);
    
    // Handle case of empty list
    // Otherwise perform normal insertion
    if(head == NULL){
        head = new_tail;
    } else{
        // Create temp for walking the list
        Node *temp = head;
    
        // Walk the list until the next node is NULL
        while(temp->next != NULL){
            temp = temp->next;
        }
        // Assign previous tail's 'next' to be our new node
        temp->next = new_tail;
    }
    
    cout << "Tail insert with data: " << d << endl;
    print_list();
}

// Delete node at head of list
void LinkedList::delete_head(){
    // Check if list is empty
    assert(head != NULL);

    // Set head->next as new head and free old one
    Node *temp = head;
    head = temp->next;
    delete temp;

    cout << "Head delete" << endl;
    print_list();
}

// Delete node at position 'p' in list
// Assume 'p' is a valid location
void LinkedList::delete_position(int p){
    // Check if list is empty
    assert(head != NULL);

    // Walk the list to the position for deletion
    Node *temp = head;
    Node *prev = NULL;
    for(int i = 0; i < p; i++){
        // Check if deletion point is past the end of the list
        assert(temp != NULL);
        prev = temp;
        temp = temp->next;
    }

    // Handle head deletion
    // Otherwise normal deletion
    if(prev == NULL){
        head = temp->next;
    }else{
        prev->next = temp->next;
    }
    delete temp;

    cout << "Position " << p << " delete" << endl;
    print_list();
}

// Delete node at tail of list
void LinkedList::delete_tail(){
    // Check if list is empty
    assert(head != NULL);

    // Walk the list and save the previous and current Node
    Node *temp = head;
    Node *prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    // Handle case where there is only 1 list item
    // Otherwise normal tail delete
    if(prev == NULL){
        head = NULL;
    }else{
        prev->next = temp->next;
    }
    delete temp;

    cout << "Tail delete" << endl;
    print_list();
}

// Prints out the list
void LinkedList::print_list(){
    for(int i = 0; i < 72; i++){
        cout << '-';
    }
    cout << endl;
    
    Node *temp = head;
    cout << "List\t";
    while(temp != NULL){
        cout << temp->data << '\t';
        temp = temp->next;
    }
    cout << endl;

    for(int i = 0; i < 72; i++){
        cout << '-';
    }
    cout << endl;
}
