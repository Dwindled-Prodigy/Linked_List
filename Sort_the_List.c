void splitList(NODE head, NODE* front, NODE* back) {
    if (head == NULL || head->link == NULL) {
        *front = head;
        *back = NULL;
        return;
    }

    NODE slow = head;
    NODE fast = head->link;

    while (fast != NULL) {
        fast = fast->link;
        if (fast != NULL) {
            slow = slow->link;
            fast = fast->link;
        }
    }

    *front = head;
    *back = slow->link;
    slow->link = NULL;
}

NODE merge(NODE a, NODE b) {
    NODE result = NULL;

    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;

    if (a->data <= b->data) {
        result = a;
        result->link = merge(a->link, b);
    } else {
        result = b;
        result->link = merge(a, b->link);
    }

    return result;
}

void mergeSort(NODE* head) {
    NODE h = *head;
    NODE a, b;

    if (h == NULL || h->link == NULL)
        return;

    splitList(h, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *head = merge(a, b);
}
