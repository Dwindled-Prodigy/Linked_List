public void clearList(Node[] head) {
    Node current = head[0];
    Node next;

    while (current != null) {
        next = current.link;
        current = null;
        current = next;
    }

    head[0] = null;
}
