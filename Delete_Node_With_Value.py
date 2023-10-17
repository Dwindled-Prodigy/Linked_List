#This function will delete the first occurrence of a node with the specified value in the linked list.

class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def delete_node_with_value(head, value):
    current = head
    prev = None

    if current and current.data == value:
        return current.link

    while current and current.data != value:
        prev = current
        current = current.link

    if current is None:
        print("Node with value", value, "not found in the list.")
        return head

    prev.link = current.link
    return head
