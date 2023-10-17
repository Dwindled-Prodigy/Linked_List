class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def create_node():
    data = int(input("Enter data for the new node: "))
    return Node(data)

def insert_front(head, new_node):
    if new_node:
        new_node.link = head
        return new_node
    return head

def insert_rear(head, new_node):
    if new_node:
        if head is None:
            return new_node
        current = head
        while current.link:
            current = current.link
        current.link = new_node
    return head

def delete_front(head):
    if head:
        head = head.link
    return head

def delete_rear(head):
    if head:
        if not head.link:
            return None
        current = head
        while current.link.link:
            current = current.link
        current.link = None
    return head

def print_list(head):
    current = head
    print("Linked List: ", end='')
    while current:
        print(current.data, " -> ", end='')
        current = current.link
    print("NULL")

if __name__ == "__main__":
    head = None

    while True:
        print("\nChoose an operation:")
        print("1. Insert at the front")
        print("2. Insert at the rear")
        print("3. Delete from the front")
        print("4. Delete from the rear")
        print("5. Print the linked list")
        print("6. Quit")

        choice = int(input("Enter your choice: ")

        if choice == 1:
            head = insert_front(head, create_node())
        elif choice == 2:
            head = insert_rear(head, create_node())
        elif choice == 3:
            head = delete_front(head)
        elif choice == 4:
            head = delete_rear(head)
        elif choice == 5:
            print_list(head)
        elif choice == 6:
            break
        else:
            print("Invalid choice. Please choose a valid option.")
