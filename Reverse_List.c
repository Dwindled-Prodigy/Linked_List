void reverseList(NODE* head) {
    NODE current = *head;
    NODE prev = NULL;
    NODE next = NULL;

    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}
