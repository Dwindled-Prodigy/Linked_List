public void insertInSortedOrder(Node[] head, int data) {
    Node newNode = new Node(data);
    if (head[0] == null || data < head[0].data) {
        insertFront(head, newNode);
        return;
    }
    Node current = head[0];
    while (current.link != null && data > current.link.data) {
        current = current.link;
    }
    newNode.link = current.link;
    current.link = newNode;
}
