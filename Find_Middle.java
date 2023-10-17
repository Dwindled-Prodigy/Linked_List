//This function will find the middle node of a singly linked list. If the list has an even number of nodes, they return the second middle node. If the list is empty, they return NULL

public Node findMiddle(Node head) {
    if (head == null) {
        return null;
    }

    Node slow = head;
    Node fast = head;

    while (fast != null && fast.link != null) {
        slow = slow.link;
        fast = fast.link.link;
    }

    return slow;
}
