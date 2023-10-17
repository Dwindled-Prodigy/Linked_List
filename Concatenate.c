void concatenateLists(NODE* list1, NODE list2) {
    if (*list1 == NULL) {
        *list1 = list2;
    } else {
        NODE current = *list1;
        while (current->link != NULL) {
            current = current->link;
        }
        current->link = list2;
    }
}
