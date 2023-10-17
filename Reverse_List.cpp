void reverseList(Node** head) {
    Node* current = *head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}
