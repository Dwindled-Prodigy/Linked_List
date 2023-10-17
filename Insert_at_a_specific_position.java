public void insertAtPosition(Node[] head, int data, int position) {
    if (position < 0) {
        System.out.println("Invalid position. Position should be non-negative.");
        return;
    }

    Node newNode = new Node(data);

    if (position == 0) {
        insertFront(head, newNode);
    } else {
        Node current = head[0];
        int currentPosition = 0;
        while (current != null && currentPosition < position - 1) {
            current = current.link;
            currentPosition++;
        }

        if (current == null) {
            System.out.println("Position is out of range. Node not inserted.");
            return;
        }

        newNode.link = current.link;
        current.link = newNode;
    }
}
