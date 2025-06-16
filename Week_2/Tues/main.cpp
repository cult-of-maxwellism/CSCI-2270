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
    for(int i = 0; i < 10; i++) {
        LL.append(i);
        LL.printList();
    }

    //print result
    LL.printList();

    int userIn = 0;
    cout << "Do you want to (1) Search, (2) Add Data To The Front, or (3) Put Something In The Middle?" << endl;
    cin >> userIn;

    switch(userIn) { 
        case 1:
            cout << "not functioning!" << endl; // "Tell me what to search for!" << endl;
            //cin >> userIn;
            //if (LL.search(userIn) != nullptr) {
            //    cout << 
        break;
        case 2:
            cout << "What do you want to add?" << endl;
            cin >> userIn;
            LL.prepend(userIn);
            LL.printList();
        break;
        case 3:
            cout << "What do you want to add?" << endl;
            cin >> userIn;
            int newData = userIn;
            cout << "What do you want to add it after?" << endl;
            cin >> userIn;
            LL.insert(userIn, newData);

            cout << "Printing..." << endl;
            LL.printList();
        break;
        //default:
        //    cout << "Quitting!" << endl;
        //break;
    }
}
