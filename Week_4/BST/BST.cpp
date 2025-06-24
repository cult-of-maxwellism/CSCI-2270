#include "BST.hpp"
#include <iostream>

using namespace std;

BST::BST() {
    //TODO
}

Node* BST::search(int target) {
    //TODO
    return nullptr;
}

Node* BST::recursiveInsert(Node* current, int new_key) {
    //TODO
    return nullptr;
}

void BST::insert(int new_key) {
    //TODO
}

/**
 * Pretty prints a binary tree using recursion
 *
 * You are encouraged to copy & paste this for debugging Assignment 5.
 * Adapted from: 
 * https://stackoverflow.com/questions/36802354/print-binary-tree-in-a-pretty-way-using-c
**/
void BST::printTree(const string& prefix, const Node* current, bool is_left) {
    if (current != NULL) {
        //pretty formatting
        cout << prefix;
        cout << (is_left ? "R--" : "L--");

        // print the value of the node
        cout << current->key << endl;

        // enter the next tree level - left and right branch
        printTree(prefix + (is_left ? "|   " : "    "), current->right, true);
        printTree(prefix + (is_left ? "|   " : "    "), current->left, false);
    }
}

void BST::print() {
    printTree("", root, false);
}