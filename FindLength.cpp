int findLength(Node* head) {
    int length = 0;
    Node* current = head;

    while (current != nullptr) {
        length++;
        current = current->link;
    }

    return length;
}
