void splitList(Node** head, Node** list1, Node** list2, int position) {
    *list1 = *head;

    Node* current = *head;
    int currentPosition = 0;

    while (current != nullptr && currentPosition < position - 1) {
        current = current->link;
        currentPosition++;
    }

    if (current == nullptr) {
        *list2 = nullptr;
    } else {
        *list2 = current->link;
        current->link = nullptr;
    }
}
