public void insertBeforeNode(Node[] head, Node beforeNode, int data) {
    if (beforeNode == null) {
        System.out.println("The node to insert before cannot be null.");
        return;
    }

    Node newNode = new Node(data);

    if (head[0] == beforeNode) {
        newNode.link = head[0];
        head[0] = newNode;
    } else {
        Node current = head[0];
        while (current != null && current.link != beforeNode) {
            current = current.link;
        }

        if (current == null) {
            System.out.println("Node not found. Node not inserted.");
            return;
        }

        newNode.link = beforeNode;
        current.link = newNode;
    }
}
