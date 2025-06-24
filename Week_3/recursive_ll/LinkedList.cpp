#include <iostream>
#include "LinkedList.hpp"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::append(int new_data) {
    if(!head) {
        head = new Node{new_data, nullptr};
        return;
    }
    
    Node *current = head;
    while(current->next != nullptr) {
        current = current->next;
    }

    Node *new_node = new Node{new_data, nullptr};
    current->next = new_node;
    return;
}

void LinkedList::printList() {
    Node *current_node = head;
    while(current_node != NULL)
    {
        cout << current_node->data << " -> ";
        current_node = current_node->next;
    }
    cout << "nullptr" << endl;
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

Node* LinkedList::recursiveReverse(Node* front, Node* end) {
    if (front->next == nullptr) {

    } else {

    }
}

void LinkedList::insert(int prev_data, int new_data) {
    Node *prev_node = search(prev_data);

    if (prev_node != nullptr) {
        Node *new_node = new Node {new_data, prev_node->next};
        prev_node->next = new_node;
    } else {
        cout << "Data does not exist!" << endl;
    }
    return;
}
