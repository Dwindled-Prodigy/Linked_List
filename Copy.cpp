Node* copyList(Node* original) {
    Node* head = nullptr; // Initialize the head of the new list
    Node* tail = nullptr; // Initialize the tail of the new list

    // Iterate through the original list and create a new node for each element
    while (original != nullptr) {
        Node* newNode = new Node(original->data); // Create a new node with the same data
        if (head == nullptr) {
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
