Node* getNthNode(Node* head, int n) {
    Node* current = head;
    int position = 0;

    while (current != nullptr && position < n) {
        current = current->link;
        position++;
    }

    if (current == nullptr) {
        return nullptr; // The list is shorter than n
    }

    return current;
}
