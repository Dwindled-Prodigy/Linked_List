NODE mergeSortedLists(NODE list1, NODE list2) {
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    NODE result = NULL;

    if (list1->data <= list2->data) {
        result = list1;
        result->link = mergeSortedLists(list1->link, list2);
    } else {
        result = list2;
        result->link = mergeSortedLists(list1, list2->link);
    }

    return result;
}
