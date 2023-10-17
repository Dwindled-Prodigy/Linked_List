public void insertAfterNode(Node head, Node afterNode, int data) {
    if (afterNode == null) {
        System.out.println("The node to insert after cannot be null.");
        return;
    }

    Node newNode = new Node(data);
    newNode.link = afterNode.link;
    afterNode.link = newNode;
}
