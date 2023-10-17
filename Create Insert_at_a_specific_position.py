class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def insert_at_position(head, data, position):
    if position < 0:
        print("Invalid position. Position should be non-negative.")
        return

    new_node = Node(data)

    if position == 0:
        new_node.link = head
        return new_node
    else:
        current = head
        current_position = 0
        while current and current_position < position - 1:
            current = current.link
            current_position += 1

        if not current:
            print("Position is out of range. Node not inserted.")
            return head

        new_node.link = current.link
        current.link = new_node
        return head
