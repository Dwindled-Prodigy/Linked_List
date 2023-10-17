#This function will find the middle node of a singly linked list. If the list has an even number of nodes, they return the second middle node. If the list is empty, they return None

class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def find_middle(head):
    if head is None:
        return None

    slow = head
    fast = head

    while fast and fast.link:
        slow = slow.link
        fast = fast.link.link

    return slow
