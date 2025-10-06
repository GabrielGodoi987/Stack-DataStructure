#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* nextValue;
};

Node* createNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;          
    newNode->nextValue = nullptr;
    return newNode;
}

int main() {
    Node* node1 = createNewNode(10);
    cout << "Node data: " << node1->data << endl;
    delete node1;
    return 0;
}
