NODE getNthNode(NODE head, int n) {
    NODE current = head;
    int position = 0;

    while (current != NULL && position < n) {
        current = current->link;
        position++;
    }

    if (current == NULL) {
        return NULL; // The list is shorter than n
    }

    return current;
}
