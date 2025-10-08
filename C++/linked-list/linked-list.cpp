#include <iostream>
#include "LinkedList.h"
#include "Node.h"

int main() {
    Node* head = new Node();
    head->data = 10;

    LinkedList list(head);

    list.insertElement(20);
    list.insertElement(30);
    list.insertElement(40);

    cout << "Conteúdo da lista ligada:" << endl;
    list.traversal();

    return 0;
}
