//This function will delete the first occurrence of a node with the specified value in the linked list.

void deleteNodeWithValue(NODE* head, int value) {
    NODE current = *head;
    NODE prev = NULL;

    if (current != NULL && current->data == value) {
        *head = current->link;
        free(current);
        return;
    }

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->link;
    }

    if (current == NULL) {
        printf("Node with value %d not found in the list.\n", value);
        return;
    }

    prev->link = current->link;
    free(current);
}
