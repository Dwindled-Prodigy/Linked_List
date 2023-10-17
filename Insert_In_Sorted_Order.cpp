void insertInSortedOrder(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == nullptr || data < (*head)->data) {
        insertFront(head, newNode);
        return;
    }
    Node* current = *head;
    while (current->link != nullptr && data > current->link->data) {
        current = current->link;
    }
    newNode->link = current->link;
    current->link = newNode;
}
