NODE copyList(NODE original) {
    NODE head = NULL; // Initialize the head of the new list
    NODE tail = NULL; // Initialize the tail of the new list

    // Iterate through the original list and create a new node for each element
    while (original != NULL) {
        NODE newNode = createNode(original->data); // Create a new node with the same data
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->link = newNode;
            tail = newNode;
        }
        original = original->link;
    }

    return head;
}
