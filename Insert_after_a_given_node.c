void insertAfterNode(NODE* head, NODE afterNode, int data) {
    if (afterNode == NULL) {
        printf("The node to insert after cannot be NULL.\n");
        return;
    }

    NODE newNode = createNode(data);

    newNode->link = afterNode->link;
    afterNode->link = newNode;
}
