//This function will find the middle node of a singly linked list. If the list has an even number of nodes, they return the second middle node. If the list is empty, they return nullptr 

Node* findMiddle(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->link != nullptr) {
        slow = slow->link;
        fast = fast->link->link;
    }

    return slow;
}
