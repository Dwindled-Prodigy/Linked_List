//This function will find the middle node of a singly linked list. If the list has an even number of nodes, they return the second middle node. If the list is empty, they return NULL

NODE findMiddle(NODE head) {
    if (head == NULL) {
        return NULL;
    }

    NODE slow = head;
    NODE fast = head;

    while (fast != NULL && fast->link != NULL) {
        slow = slow->link;
        fast = fast->link->link;
    }

    return slow;
}
