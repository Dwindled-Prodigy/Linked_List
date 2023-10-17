void insertBeforeNode(Node** head, Node* beforeNode, int data) {
    if (beforeNode == nullptr) {
        cout << "The node to insert before cannot be NULL." << endl;
        return;
    }

    Node* newNode = createNode(data);

    if (*head == beforeNode) {
        newNode->link = *head;
        *head = newNode;
    } else {
        Node* current = *head;
        while (current != nullptr && current->link != beforeNode) {
            current = current->link;
        }

        if (current == nullptr) {
            cout << "Node not found. Node not inserted." << endl;
            return;
        }

        newNode->link = beforeNode;
        current->link = newNode;
    }
}
