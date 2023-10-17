class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def delete_node_at_position(head, position):
    if position < 0:
        print("Invalid position. Position should be non-negative.")
        return head

    if head is None:
        print("List is empty. Node cannot be deleted.")
        return head

    if position == 0:
        return head.link

    current = head
    prev = None
    current_position = 0

    while current and current_position < position:
        prev = current
        current = current.link
        current_position += 1

    if current is None:
        print("Position is out of range. Node not deleted.")
        return head

    prev.link = current.link
    return head
