#include "Stack.hpp"
#include <iostream>

Stack::Stack() {
    head = nullptr;
}

int Stack::pop() {
    if (!head) {
        cout << "Stack underflow." << endl;
        return -1;
    }

    int ret = head->data;
    Node *temp = head;

}

void Stack::push(int data) {
    Node *new_node = new Node{data, head};
    head = new_node;
}

Stack::~Stack() {
    while (head) {
        Node *temp = head;
        head = head -> next;
        delete temp;
    }
}
