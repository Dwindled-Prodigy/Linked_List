public void deleteNodeAtPosition(Node[] head, int position) {
    if (position < 0) {
        System.out.println("Invalid position. Position should be non-negative.");
        return;
    }

    if (head[0] == null) {
        System.out.println("List is empty. Node cannot be deleted.");
        return;
    }

    if (position == 0) {
        Node temp = head[0];
        head[0] = temp.link;
        return;
    }

    Node current = head[0];
    Node prev = null;
    int currentPosition = 0;

    while (current != null && currentPosition < position) {
        prev = current;
        current = current.link;
        currentPosition++;
    }

    if (current == null) {
        System.out.println("Position is out of range. Node not deleted.");
        return;
    }

    prev.link = current.link;
}
