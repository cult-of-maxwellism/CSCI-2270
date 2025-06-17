#ifndef STACK_H
#define STACK_H

struct Node {
    int data;
    Node *next;
};

class Stack {
    public:
        Stack();
        ~Stack();
        int pop();
        void push(int);
    private:
        Node *head;
};

#endif