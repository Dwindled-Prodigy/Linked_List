class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def get_nth_node(head, n):
    current = head
    position = 0

    while current and position < n:
        current = current.link
        position += 1

    if current is None:
        return None  # The list is shorter than n

    return current
