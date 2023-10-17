void clearList(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != nullptr) {
        next = current->link;
        delete current;
        current = next;
    }

    *head = nullptr;
}
