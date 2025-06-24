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

        //new methods
        void prepend(int);
        Node* search(int);
        void insert(int, int);
        Node* recursiveReverse (Node*, Node*);

    private:
        Node *head;
};

#endif
