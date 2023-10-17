class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def split_list(head, position):
    list1 = head
    current = head
    current_position = 0

    while current and current_position < position - 1:
        current = current.link
        current_position += 1

    if current is None:
        list2 = None
    else:
        list2 = current.link
        current.link = None

    return list1, list2
