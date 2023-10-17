import java.util.Scanner;

class Node {
    int data;
    Node link;
}

public class LinkedListExample {
    public static Node createNode() {
        Node newNode = new Node();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter data for the new node: ");
        newNode.data = scanner.nextInt();
        newNode.link = null;
        return newNode;
    }

    public static void insertFront(Node[] head, Node newNode) {
        if (newNode != null) {
            newNode.link = head[0];
            head[0] = newNode;
        }
    }

    public static void insertRear(Node[] head, Node newNode) {
        if (newNode != null) {
            if (head[0] == null) {
                head[0] = newNode;
            } else {
                Node current = head[0];
                while (current.link != null) {
                    current = current.link;
                }
                current.link = newNode;
            }
        }
    }

    public static void deleteFront(Node[] head) {
        if (head[0] != null) {
            Node temp = head[0];
            head[0] = head[0].link;
        }
    }

    public static void deleteRear(Node[] head) {
        if (head[0] != null) {
            if (head[0].link == null) {
                head[0] = null;
            } else {
                Node current = head[0];
                while (current.link.link != null) {
                    current = current.link;
                }
                current.link = null;
            }
        }
    }

    public static void printList(Node head) {
        Node current = head;
        System.out.print("Linked List: ");
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.link;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        Node[] head = { null };
        Scanner scanner = new Scanner(System.in);
        int choice;

        while (true) {
            System.out.println("\nChoose an operation:");
            System.out.println("1. Insert at the front");
            System.out.println("2. Insert at the rear");
            System.out.println("3. Delete from the front");
            System.out.println("4. Delete from the rear");
            System.out.println("5. Print the linked list");
            System.out.println("6. Quit");

            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    insertFront(head, createNode());
                    break;
                case 2:
                    insertRear(head, createNode());
                    break;
                case 3:
                    deleteFront(head);
                    break;
                case 4:
                    deleteRear(head);
                    break;
                case 5:
                    printList(head[0]);
                    break;
                case 6:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please choose a valid option.");
            }
        }
    }
}
