class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def reverse_list(head):
    current = head
    prev = None

    while current:
        next_node = current.link
        current.link = prev
        prev = current
        current = next_node

    return prev
