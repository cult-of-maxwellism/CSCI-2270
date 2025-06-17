#ifndef QUEUE_H
#define QUEUE_H

struct Node {
    int data;
    Node *next;
};

class Queue {
    public:
        Queue();
        void enqueue(int);
        void dequeue();
        int peek();
    private:
        Node *head;
        Node *tail;
};

#endif
