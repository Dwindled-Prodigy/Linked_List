public Node copyList(Node original) {
    Node head = null; // Initialize the head of the new list
    Node tail = null; // Initialize the tail of the new list

    // Iterate through the original list and create a new node for each element
    while (original != null) {
        Node newNode = new Node(original.data); // Create a new node with the same data
        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.link = newNode;
            tail = newNode;
        }
        original = original.link;
    }

    return head;
}
