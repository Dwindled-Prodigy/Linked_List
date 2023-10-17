public Node merge(Node a, Node b) {
    Node result = null;

    if (a == null)
        return b;
    else if (b == null)
        return a;

    if (a.data <= b.data) {
        result = a;
        result.link = merge(a.link, b);
    } else {
        result = b;
        result.link = merge(a, b.link);
    }

    return result;
}

public void splitList(Node head, Node[] front, Node[] back) {
    if (head == null || head.link == null) {
        front[0] = head;
        back[0] = null;
        return;
    }

    Node slow = head;
    Node fast = head.link;

    while (fast != null) {
        fast = fast.link;
        if (fast != null) {
            slow = slow.link;
            fast = fast.link;
        }
    }

    front[0] = head;
    back[0] = slow.link;
    slow.link = null;
}

public void mergeSort(Node[] head) {
    Node h = head[0];
    if (h == null || h.link == null)
        return;

    Node[] a = new Node[1];
    Node[] b = new Node[1];
    splitList(h, a, b);
    mergeSort(a);
    mergeSort(b);
    head[0] = merge(a[0], b[0]);
}
