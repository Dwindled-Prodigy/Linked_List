class Node:
    def __init__(self, data):
        self.data = data
        self.link = None

def merge(a, b):
    result = None

    if a is None:
        return b
    if b is None:
        return a

    if a.data <= b.data:
        result = a
        result.link = merge(a.link, b)
    else:
        result = b
        result.link = merge(a, b.link)

    return result

def split_list(head):
    if head is None or head.link is None:
        return head, None

    slow = head
    fast = head.link
    while fast and fast.link:
        slow = slow.link
        fast = fast.link.link

    front = head
    back = slow.link
    slow.link = None

    return front, back

def merge_sort(head):
    if head is None or head.link is None:
        return head

    front, back = split_list(head)
    front = merge_sort(front)
    back = merge_sort(back)

    return merge(front, back)
