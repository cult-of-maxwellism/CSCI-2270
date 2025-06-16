#include <iostream>
#include "LinkedList.hpp"

using namespace std;

LinkedList::LinkedList() {
    //open a null LL 
    head = nullptr;
}

void LinkedList::append(int new_data) {
    //if head is the only thing in the linked list, add a node!
    if (!head) { //we're asking the computer if head is not null - this returns true if head is null iirc
        head = new Node{new_data, nullptr};
        return;
    }

    //otherwise, append a new node to the end of the list
    Node *cur = head;
    while (cur->next != nullptr) {
        cur = cur->next;
    }

    Node *new_node = new Node{new_data, nullptr};

    cur->next = new_node;
    return;
}

void LinkedList::prepend(int new_data) {
    Node *new_node = new Node {new_data, head->next};

    head->next = new_node;

    return;
}

Node* LinkedList::search(int target) {
    Node *current = head;

    while (current->next != nullptr && current->data != target) {
        current = current->next;
    }

    return current;
}

void LinkedList::insert (int prev_data, int new_data) {
    Node *prev_node = search(prev_data);

    if (prev_node != nullptr) {
        Node *new_node = new Node {new_data, prev_node->next};
        prev_node->next = new_node;
    } else {
        cout << "Data doesn't exist!" << endl;
    }

    return;
}

/** 
* Displays the linked list.
**/
void LinkedList::printList() {
    Node *current_node = head;
    while(current_node != NULL) {
        cout << current_node->data << " -> ";
        current_node = current_node->next;
    }
    cout << "nullptr" << endl;
}

