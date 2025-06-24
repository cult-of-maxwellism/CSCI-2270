#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left = nullptr;
    Node *right = nullptr;
};

class BST
{
    public:
        BST();
        Node* search(int);
        Node* recursiveInsert(Node*, int);
        void insert(int);

        //already implemented
        void printTree(const string&, const Node*, bool);
        void print();

    private:
        Node *root;
};

#endif