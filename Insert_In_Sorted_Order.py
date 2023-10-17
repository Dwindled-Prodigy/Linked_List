class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def insert_in_sorted_order(head, data):
    new_node = Node(data)
    if head is None or data < head.data:
        new_node.link = head
        return new_node
    current = head
    while current.link and data > current.link.data:
        current = current.link
    new_node.link = current.link
    current.link = new_node
    return head
