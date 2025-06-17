#include "Stack.hpp"
#include <iostream>

using namespace std;

int main()
{
    //create an empty stack
    Stack s;
    
    s.pop();

    //push elements to the stack
    for(int i = 0; i < 12; i++) {
        s.push(i);
    }

    //print the stack
    cout << "--TOP--" << endl;
    while(!s.isEmpty()) {
        cout << s.pop() << endl;
    }
    cout << "--BOTTOM--" << endl;
    
    return 0;
}