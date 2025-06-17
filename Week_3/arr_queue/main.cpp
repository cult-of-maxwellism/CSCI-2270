#include "Queue.hpp"
#include <iostream>

using namespace std;

int main() {
    //create an empty queue
    Queue q; 
    
    //test underflow
    q.dequeue();

    //fill and test overflow
    for (int i = 0; i < 11; i++) { q.enqueue(i); }

    //print the contents of the queue
    cout << " -FRONT-  ";
    while (q.peek() != -1) {
        cout << q.peek() << " ";
        q.dequeue();
    }
    cout << " -BACK- " << endl;
    return 0;
}
