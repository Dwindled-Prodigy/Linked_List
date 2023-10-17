void deleteNodeAtPosition(NODE* head, int position) {
    if (position < 0) {
        printf("Invalid position. Position should be non-negative.\n");
        return;
    }

    if (*head == NULL) {
        printf("List is empty. Node cannot be deleted.\n");
        return;
    }

    if (position == 0) {
        NODE temp = *head;
        *head = temp->link;
        free(temp);
        return;
    }

    NODE current = *head;
    NODE prev = NULL;
    int currentPosition = 0;

    while (current != NULL && currentPosition < position) {
        prev = current;
        current = current->link;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Position is out of range. Node not deleted.\n");
        return;
    }

    prev->link = current->link;
    free(current);
}
