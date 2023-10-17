void insertBeforeNode(NODE* head, NODE beforeNode, int data) {
    if (beforeNode == NULL) {
        printf("The node to insert before cannot be NULL.\n");
        return;
    }

    NODE newNode = createNode(data);

    if (*head == beforeNode) {
        newNode->link = *head;
        *head = newNode;
    } else {
        NODE current = *head;
        while (current != NULL && current->link != beforeNode) {
            current = current->link;
        }

        if (current == NULL) {
            printf("Node not found. Node not inserted.\n");
            return;
        }

        newNode->link = beforeNode;
        current->link = newNode;
    }
}
