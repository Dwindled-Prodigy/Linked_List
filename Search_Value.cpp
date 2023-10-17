int searchValue(Node* head, int value) {
    Node* current = head;
    int position = 0;

    while (current != nullptr) {
        if (current->data == value) {
            return position;
        }
        current = current->link;
        position++;
    }

    return -1; // Value not found
}
