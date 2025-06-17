#include "Queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue() {
    //TODO
}

void Queue::enqueue(int data) {
    if (num_items > SIZE) {
        cout << "Queue overflow!" << endl;
    } else {
        arr[back] = data;
        back = (back+1)%SIZE;
        num_items++;
    }
    
}

void Queue::dequeue() {
    if (num_items <= 0) {
        cout << "Queue underflow!" << endl;
    } else {
        front = (front+1) % SIZE;
        num_items--;
    }
}

int Queue::peek() {
    if(num_items <= 0) {
        return -1;
    } else {
        return arr[front];
    }
}
