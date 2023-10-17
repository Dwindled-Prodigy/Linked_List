void clearList(NODE* head) {
    NODE current = *head;
    NODE next;

    while (current != NULL) {
        next = current->link;
        free(current);
        current = next;
    }

    *head = NULL;
}
