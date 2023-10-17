class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def concatenate_lists(list1, list2):
    if list1 is None:
        return list2

    current = list1
    while current.link:
        current = current.link

    current.link = list2
    return list1
