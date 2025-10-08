//
// Created by gabrielgodoi on 10/6/25.
//

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include <vector>

#include "Node.h"

using namespace std;

class LinkedList {
private:
    Node *head;

public:
    explicit LinkedList(Node *list) {
        head = list;
    }

    Node *insertElement(const int value) {
        Node *current = head;
        while (current->nextValue != nullptr) {
            current = current->nextValue;

            if (current->nextValue == nullptr) {
                break;
            }
        }

        const auto newNode = new Node();
        newNode->data = value;
        current->nextValue = newNode;
        return newNode;
    }

    void traversal() const {
        Node *current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->nextValue != nullptr) {
                cout << "->";
            }
            current = current->nextValue;
        }
    }
};


#endif //LINKED_LIST_LINKEDLIST_H
