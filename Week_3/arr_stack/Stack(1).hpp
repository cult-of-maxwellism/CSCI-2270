#ifndef STACK_H
#define STACK_H

using namespace std;

class Stack
{
    public:
        Stack();
        void push(int);
        int pop();
        bool isEmpty();

    private:
        const static int SIZE = 10;
        int arr[SIZE];
        int top;
};


#endif