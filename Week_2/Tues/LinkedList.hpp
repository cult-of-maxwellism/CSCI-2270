#ifndef LIST_H
#define LIST_H

using namespace std;

struct Node {
    int data;
    Node *next;
};

class LinkedList {
    public:
        LinkedList();
        void append(int);
        void printList();

        void prepend(int);
        void insert(int, int);
        Node* search(int);
        //void prepend(int);
        //void deleteNode(int);
        //void findNode(int);
        //void printList(int);

    private:
        Node *head;
};

#endif
