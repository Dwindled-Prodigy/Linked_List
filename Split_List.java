public void splitList(Node[] head, Node[] list1, Node[] list2, int position) {
    list1[0] = head[0];

    Node current = head[0];
    int currentPosition = 0;

    while (current != null && currentPosition < position - 1) {
        current = current.link;
        currentPosition++;
    }

    if (current == null) {
        list2[0] = null;
    } else {
        list2[0] = current.link;
        current.link = null;
    }
}
