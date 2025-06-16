#include <iostream>
#include "LinkedList.hpp"

//compile with: g++ -std=c++17 main.cpp LinkedList.cpp

using namespace std;

int main()
{
    //create an empty linked list
    LinkedList LL;

    //print empty list
    LL.printList();

    //fill linked list with numbers in a for loop
    for(int i = 0; i < 10; i++)
    {
        LL.append(i);
    }

    //display list
    LL.printList();

    //prepend a new value

    //insert a new node 

    return 0;
}