class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def copy_list(original):
    head = None  # Initialize the head of the new list
    tail = None  # Initialize the tail of the new list

    # Iterate through the original list and create a new node for each element
    current = original
    while current:
        new_node = Node(current.data)  # Create a new node with the same data
        if head is None:
            head = new_node
            tail = new_node
        else:
            tail.link = new_node
            tail = new_node
        current = current.link

    return head
