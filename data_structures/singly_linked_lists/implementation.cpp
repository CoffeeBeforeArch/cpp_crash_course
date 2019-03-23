// This file implements the methods of the 'LinkedList' class
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

// Add node at head
void LinkedList::insert_head(int d){
    cout << "Head insert with data: " << d << endl;

    // Create a new node with data value 'd'
    Node *new_head = new Node(d);

    // Set head = tail = temp if list is empty
    // Otherwise perform normal insertion
    if(head == NULL){
        head = new_head;
        tail = new_head;
    } else {
        new_head->next = head;
        head = new_head;
    }

    print_list();
}

// Add node at position 'p' in list
// Assumes 'p' is a valid location
void LinkedList::insert_position(int d, int p){
    cout << "Position " << p <<  " insert with data: " << d << endl;

    // Create a new node with data value 'd'
    Node *new_node = new Node(d);

    // Create temp node for walking the list
    Node *temp_node = head;
    // Keep track of previous node to update its 'next'
    Node *prev = NULL;
    // Walk the list to get to the entry point for new node
    for(int i = 0; i < p; i++){
        // Check if insertion point is past the end of the list
        assert(temp_node != NULL);
        // Update previous node and current node
        prev = temp_node;
        temp_node = temp_node->next;
    }
    
    // Perform insertion
    prev->next = new_node;
    new_node->next = temp_node;

    print_list();
}

// Add node at tail
void LinkedList::insert_tail(int d){
    cout << "Tail insert with data: " << d << endl;

    // Create new node with value 'd'
    Node *new_tail = new Node(d);
    
    // Handle case of empty list
    // Otherwise perform normal insertion
    if(head == NULL){
        head = new_tail;
        tail = new_tail;
    } else{
        // Create temp for walking the list
        Node *temp = head;
    
        // Walk the list until the next node is NULL
        while(temp->next != NULL){
            temp = temp->next;
        }
        // Assign previous tail's 'next' to be our new node
        temp->next = new_tail;
        // Assign tail to be our new node
        tail = new_tail;
    }
    
    print_list();
}

// Delete node at head of list
void LinkedList::delete_head(){
    cout << "Head delete" << endl;

    // Check if list is empty
    assert(head != NULL);
    // Set head->next as new head and free old one
    Node *temp_node = head;
    head = temp_node->next;
    delete temp_node;

    print_list();
}

// Delete node at position 'p' in list
// Assume 'p' is a valid location
void LinkedList::delete_position(int p){
    cout << "Position " << p << " delete" << endl;

    // Check if list is empty
    assert(head == NULL);

    // Walk the list to the position for deletion
    Node *temp_node = head;
    Node *prev = NULL;
    for(int i = 0; i < p; i++){
        // Check if deletion point is past the end of the list
        assert(temp_node != NULL);
        prev = temp_node;
        temp_node = temp_node->next;
    }

    // Delete update previous next to be current next
    prev->next = temp_node->next;
    delete temp_node;
    print_list();
}

// Delete node at tail of list
void LinkedList::delete_tail(){
    cout << "Tail delete" << endl;

    // Check if list is empty
    assert(head != NULL);

    // Walk the list and save the previous and current Node
    Node *temp_node = head;
    Node *prev = NULL;
    while(temp_node->next != NULL){
        prev = temp_node;
        temp_node = temp_node->next;
    }

    // Update tail and free the old one
    prev->next = temp_node->next;
    tail = prev;
    delete temp_node;

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
