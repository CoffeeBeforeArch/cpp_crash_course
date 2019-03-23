// This file contains the interface for the singly linked list node
// and list objects

#include <iostream>
#include <cstddef>
#include <assert.h>

// Simple node of the list
// Contains data, and a pointer to the next node
struct Node {
    int data;
    Node *next;

    // Constructor
    Node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList {
private:
    // Pointer to list head
    Node *head;
public:
    // Constructor initialzing NULL pointers
    LinkedList(){
        head = NULL;
    }

    // Add node with data 'd' at head position
    void insert_head(int d);
    // Add node with data 'd' at position in the list 'p'
    void insert_position(int d, int p);
    // Add node with data 'd' at tail position
    void insert_tail(int d);

    // Delete node at head position
    void delete_head();
    // Delete node at position in the list 'p'
    void delete_position(int p);
    // Delete node at tail position
    void delete_tail();

    // Print out the list
    void print_list();
};

