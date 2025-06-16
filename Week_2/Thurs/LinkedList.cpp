#include <iostream>
#include "LinkedList.hpp"

using namespace std;

LinkedList::LinkedList()
{
    //TODO: initialize an empty LL
    head = nullptr;
}

void LinkedList::append(int new_data)
{
    if(!head) {
        head = new Node{new_data, nullptr};
        return;
    }
    
    Node *cur = head;
    while(cur->next != nullptr) {
        cur = cur->next;
    }

    Node *new_node = new Node{new_data, nullptr};
    cur->next = new_node;
    return;
}

/** 
* Displays the linked list.
**/
void LinkedList::printList()
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        cout << current_node->data << " -> ";
        current_node = current_node->next;
    }
    cout << "nullptr" << endl;
}

// New 
void LinkedList::prepend(int new_data) {
    //TODO
}

Node* LinkedList::search(int target) {
    //TODO
    return nullptr;
}

void LinkedList::insert(int prev_data, int new_data) {
    //TODO
    return;
}