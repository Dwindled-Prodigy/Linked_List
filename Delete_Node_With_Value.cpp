//This function will delete the first occurrence of a node with the specified value in the linked list.

void deleteNodeWithValue(Node** head, int value) {
    Node* current = *head;
    Node* prev = nullptr;

    if (current != nullptr && current->data == value) {
        *head = current->link;
        delete current;
        return;
    }

    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->link;
    }

    if (current == nullptr) {
        cout << "Node with value " << value << " not found in the list." << endl;
        return;
    }

    prev->link = current->link;
    delete current;
}
