Node* merge(Node* a, Node* b) {
    Node* result = nullptr;

    if (a == nullptr)
        return b;
    else if (b == nullptr)
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

void splitList(Node* head, Node** front, Node** back) {
    Node* slow = *head;
    Node* fast = (*head)->link;

    while (fast != nullptr) {
        fast = fast->link;
        if (fast != nullptr) {
            slow = slow->link;
            fast = fast->link;
        }
    }

    *front = *head;
    *back = slow->link;
    slow->link = nullptr;
}

void mergeSort(Node** head) {
    Node* h = *head;
    if (h == nullptr || h->link == nullptr)
        return;

    Node* a;
    Node* b;
    splitList(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *head = merge(a, b);
}
