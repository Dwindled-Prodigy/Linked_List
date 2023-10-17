int searchValue(NODE head, int value) {
    NODE current = head;
    int position = 0;

    while (current != NULL) {
        if (current->data == value) {
            return position;
        }
        current = current->link;
        position++;
    }

    return -1; // Value not found
}
