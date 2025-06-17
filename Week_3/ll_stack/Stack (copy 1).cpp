#include "Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack() {
    head = nullptr;
}

int Stack::pop() {
    if(!head) {
        cout << "Stack underflow." << endl;
        return -1;
    }

    int ret = head->data;
    Node *temp = head;
    head = head->next;
    delete temp;
    return ret;
}

void Stack::push(int new_data){
    Node *new_node = new Node{new_data, head};
    head = new_node;
}

Stack::~Stack() {
    while(head) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
