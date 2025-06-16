#include "Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack(){    
    top = -1;

}

void Stack::push(int data) {
    if (top + 1 < SIZE ){
        top ++;
        arr[top] = data;
    } else {
        cout << "Stack overflow!" << endl;
    }
}

int Stack::pop() {
    if (top >= 0) {
        int ret = arr[top];
        top--;
        return ret;
    } else {
        cout << "Stack underflow!" << endl;
        return -1;
    }

    return 0;
}

int Stack::peek() {
    if (top >= 0) {
        int ret = arr[top];
        return ret;
    } else {
        cout << "Nothing there!" << endl;
        return -1;
    }
}

bool Stack::isEmpty() {
    if (top <= 0) {
        return true;
    } else {
        return false;
    }
}
