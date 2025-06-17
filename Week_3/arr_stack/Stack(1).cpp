#include "Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack()
{
    //TODO
    top = -1;
}

void Stack::push(int data)
{
    //TODO
    if(top+1 >= SIZE) {
        cout << "Stack overflow!" << endl;
    } else {
        top++;
        arr[top] = data;
    }
}

int Stack::pop()
{
    //TODO
    if(top <= -1) {
        cout << "Stack underflow!" << endl;
        return -1;
    } else {
        int ret = arr[top];
        top--;
        return ret;
    }
}

bool Stack::isEmpty()
{
    //TODO
    return (top <= -1);
}