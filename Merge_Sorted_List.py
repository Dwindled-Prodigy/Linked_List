class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def merge_sorted_lists(list1, list2):
    if list1 is None:
        return list2
    if list2 is None:
        return list1

    if list1.data <= list2.data:
        result = list1
        result.link = merge_sorted_lists(list1.link, list2)
    else:
        result = list2
        result.link = merge_sorted_lists(list1, list2.link)

    return result
