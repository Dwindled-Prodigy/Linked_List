void insertAtPosition(Node** head, int data, int position) {
    if (position < 0) {
        cout << "Invalid position. Position should be non-negative." << endl;
        return;
    }

    Node* newNode = createNode(data);

    if (position == 0) {
        insertFront(head, newNode);
    } else {
        Node* current = *head;
        int currentPosition = 0;
        while (current != nullptr && currentPosition < position - 1) {
            current = current->link;
            currentPosition++;
        }

        if (current == nullptr) {
            cout << "Position is out of range. Node not inserted." << endl;
            return;
        }

        newNode->link = current->link;
        current->link = newNode;
    }
}
