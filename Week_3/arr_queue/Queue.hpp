#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    public:
        Queue();
        void enqueue(int);
        void dequeue();
        int peek();
    private:
        const static int SIZE = 10;
        int arr[SIZE];
        int front, back, num_items;
};

#endif