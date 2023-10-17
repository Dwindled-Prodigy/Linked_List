void deleteNodeAtPosition(Node** head, int position) {
    if (position < 0) {
        cout << "Invalid position. Position should be non-negative." << endl;
        return;
    }

    if (*head == nullptr) {
        cout << "List is empty. Node cannot be deleted." << endl;
        return;
    }

    if (position == 0) {
        Node* temp = *head;
        *head = temp->link;
        delete temp;
        return;
    }

    Node* current = *head;
    Node* prev = nullptr;
    int currentPosition = 0;

    while (current != nullptr && currentPosition < position) {
        prev = current;
        current = current->link;
        currentPosition++;
    }

    if (current == nullptr) {
        cout << "Position is out of range. Node not deleted." << endl;
        return;
    }

    prev->link = current->link;
    delete current;
}
