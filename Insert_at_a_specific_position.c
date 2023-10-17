void insertAtPosition(NODE* head, int data, int position) {
    if (position < 0) {
        printf("Invalid position. Position should be non-negative.\n");
        return;
    }

    NODE newNode = createNode(data);

    if (position == 0) {
        insertFront(head, newNode);
    } else {
        NODE current = *head;
        int currentPosition = 0;
        while (current != NULL && currentPosition < position - 1) {
            current = current->link;
            currentPosition++;
        }

        if (current == NULL) {
            printf("Position is out of range. Node not inserted.\n");
            return;
        }

        newNode->link = current->link;
        current->link = newNode;
    }
}
