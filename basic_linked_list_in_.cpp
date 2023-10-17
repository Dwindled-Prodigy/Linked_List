#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* createNode() {
    Node* newNode = new Node;
    cout << "Enter data for the new node: ";
    cin >> newNode->data;
    newNode->link = nullptr;
    return newNode;
}

void insertFront(Node** head, Node* newNode) {
    if (newNode) {
        newNode->link = *head;
        *head = newNode;
    }
}

void insertRear(Node** head, Node* newNode) {
    if (newNode) {
        if (*head == nullptr) {
            *head = newNode;
        } else {
            Node* current = *head;
            while (current->link != nullptr) {
                current = current->link;
            }
            current->link = newNode;
        }
    }
}

void deleteFront(Node** head) {
    if (*head) {
        Node* temp = *head;
        *head = (*head)->link;
        delete temp;
    }
}

void deleteRear(Node** head) {
    if (*head) {
        if ((*head)->link == nullptr) {
            delete *head;
            *head = nullptr;
        } else {
            Node* current = *head;
            while (current->link->link != nullptr) {
                current = current->link;
            }
            delete current->link;
            current->link = nullptr;
        }
    }
}

void printList(Node* head) {
    Node* current = head;
    cout << "Linked List: ";
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->link;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    int choice;

    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Insert at the front\n";
        cout << "2. Insert at the rear\n";
        cout << "3. Delete from the front\n";
        cout << "4. Delete from the rear\n";
        cout << "5. Print the linked list\n";
        cout << "6. Quit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertFront(&head, createNode());
                break;
            case 2:
                insertRear(&head, createNode());
                break;
            case 3:
                deleteFront(&head);
                break;
            case 4:
                deleteRear(&head);
                break;
            case 5:
                printList(head);
                break;
            case 6:
                exit(0);
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    return 0;
}
