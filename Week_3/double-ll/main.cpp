struct DoubleNode {
    int val;
    Node* next;
    Node* prev;
};

struct Node { 

};

class DoublyLinkedList {
    public: 
        LinkedList();
        
        bool deleteNode(int);

private:
    DoubleNode *head;
};


bool DoublyLinkedList::deleteNode(int k) {
    DoubleNode* temp = head;
    for (int i = 0; i < k; i++) {
        if (temp->next != nullptr && i != (k-1)) {
            temp=temp->next;
        } else {
            return false;
        }
    }
    //if (temp->next != nullptr && temp->prev != nullptr) {
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete[] temp;
    //}
    return true;
}

int fibSeq(int numIn, int nth) {
    int numOut = 1;
    if (nth != 0) {
        numOut = (numIn - 1) + (num - 2);
    }
}

