public Node getNthNode(Node head, int n) {
    Node current = head;
    int position = 0;

    while (current != null && position < n) {
        current = current.link;
        position++;
    }

    if (current == null) {
        return null; // The list is shorter than n
    }

    return current;
}
