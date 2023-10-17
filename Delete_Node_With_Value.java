//This function will delete the first occurrence of a node with the specified value in the linked list.

public void deleteNodeWithValue(Node[] head, int value) {
    Node current = head[0];
    Node prev = null;

    if (current != null && current.data == value) {
        head[0] = current.link;
        return;
    }

    while (current != null && current.data != value) {
        prev = current;
        current = current.link;
    }

    if (current == null) {
        System.out.println("Node with value " + value + " not found in the list.");
        return;
    }

    prev.link = current.link;
}
