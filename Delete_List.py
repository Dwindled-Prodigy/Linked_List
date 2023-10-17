class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def clear_list(head):
    current = head

    while current:
        temp = current.link
        current = None
        current = temp

    return None
