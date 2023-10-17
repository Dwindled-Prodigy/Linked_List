void concatenateLists(Node** list1, Node* list2) {
    if (*list1 == nullptr) {
        *list1 = list2;
    } else {
        Node* current = *list1;
        while (current->link != nullptr) {
            current = current->link;
        }
        current->link = list2;
    }
}
