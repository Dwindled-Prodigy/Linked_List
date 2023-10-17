#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* link;
} *NODE;

NODE createNode() {
    NODE newNode = (NODE)malloc(sizeof(struct node));
    if (newNode) {
        printf("Enter data for the new node: ");
        scanf("%d", &newNode->data);
        newNode->link = NULL;
    }
    return newNode;
}

void insertFront(NODE* head, NODE newNode) {
    if (newNode) {
        newNode->link = *head;
        *head = newNode;
    }
}

void insertRear(NODE* head, NODE newNode) {
    if (newNode) {
        if (*head == NULL) {
            *head = newNode;
        } else {
            NODE current = *head;
            while (current->link != NULL) {
                current = current->link;
            }
            current->link = newNode;
        }
    }
}

void deleteFront(NODE* head) {
    if (*head) {
        NODE temp = *head;
        *head = (*head)->link;
        free(temp);
    }
}

void deleteRear(NODE* head) {
    if (*head) {
        if ((*head)->link == NULL) {
            free(*head);
            *head = NULL;
        } else {
            NODE current = *head;
            while (current->link->link != NULL) {
                current = current->link;
            }
            free(current->link);
            current->link = NULL;
        }
    }
}

void printList(NODE head) {
    NODE current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->link;
    }
    printf("NULL\n");
}

int main() {
    NODE head = NULL;
    int choice;

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Insert at the front\n");
        printf("2. Insert at the rear\n");
        printf("3. Delete from the front\n");
        printf("4. Delete from the rear\n");
        printf("5. Print the linked list\n");
        printf("6. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

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
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
