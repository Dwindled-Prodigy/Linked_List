int findLength(NODE head) {
    int length = 0;
    NODE current = head;

    while (current != NULL) {
        length++;
        current = current->link;
    }

    return length;
}
