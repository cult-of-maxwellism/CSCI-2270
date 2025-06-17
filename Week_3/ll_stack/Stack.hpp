#ifndef STACK_H
#define STACK_H

using namespace std;

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
