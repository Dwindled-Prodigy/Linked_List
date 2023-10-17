class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def insert_before_node(head, before_node, data):
    if before_node is None:
        print("The node to insert before cannot be None.")
        return

    new_node = Node(data)

    if head == before_node:
        new_node.link = head
        return new_node
    else:
        current = head
        while current and current.link != before_node:
            current = current.link

        if not current:
            print("Node not found. Node not inserted.")
            return head

        new_node.link = before_node
        current.link = new_node
        return head
