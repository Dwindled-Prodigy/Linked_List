class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def insert_after_node(head, after_node, data):
    if after_node is None:
        print("The node to insert after cannot be None.")
        return

    new_node = Node(data)
    new_node.link = after_node.link
    after_node.link = new_node
