public void reverseList(Node[] head) {
    Node current = head[0];
    Node prev = null;
    Node next = null;

    while (current != null) {
        next = current.link;
        current.link = prev;
        prev = current;
        current = next;
    }

    head[0] = prev;
}
