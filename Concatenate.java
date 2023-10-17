public void concatenateLists(Node[] list1, Node list2) {
    if (list1[0] == null) {
        list1[0] = list2;
    } else {
        Node current = list1[0];
        while (current.link != null) {
            current = current.link;
        }
        current.link = list2;
    }
}
