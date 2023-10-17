public Node mergeSortedLists(Node list1, Node list2) {
    if (list1 == null)
        return list2;
    if (list2 == null)
        return list1;

    Node result = null;

    if (list1.data <= list2.data) {
        result = list1;
        result.link = mergeSortedLists(list1.link, list2);
    } else {
        result = list2;
        result.link = mergeSortedLists(list1, list2.link);
    }

    return result;
}
