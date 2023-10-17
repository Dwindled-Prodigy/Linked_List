void splitList(NODE head, NODE* list1, NODE* list2, int position) {
    *list1 = head;

    NODE current = head;
    int currentPosition = 0;

    while (current != NULL && currentPosition < position - 1) {
        current = current->link;
        currentPosition++;
    }

    if (current == NULL) {
        *list2 = NULL;
    } else {
        *list2 = current->link;
        current->link = NULL;
    }
}
