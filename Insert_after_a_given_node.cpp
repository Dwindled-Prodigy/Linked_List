void insertAfterNode(Node* head, Node* afterNode, int data) {
    if (afterNode == nullptr) {
        cout << "The node to insert after cannot be NULL." << endl;
        return;
    }

    Node* newNode = createNode(data);

    newNode->link = afterNode->link;
    afterNode->link = newNode;
}
