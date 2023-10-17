class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def find_length(head):
    length = 0
    current = head

    while current:
        length += 1
        current = current.link

    return length
