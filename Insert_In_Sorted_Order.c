void insertInSortedOrder(NODE* head, int data) {
    NODE newNode = createNode(data);
    if (*head == NULL || data < (*head)->data) {
        insertFront(head, newNode);
        return;
    }
    NODE current = *head;
    while (current->link != NULL && data > current->link->data) {
        current = current->link;
    }
    newNode->link = current->link;
    current->link = newNode;
}
