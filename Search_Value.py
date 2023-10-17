def search_value(head, value):
    current = head
    position = 0

    while current:
        if current.data == value:
            return position
        current = current.link
        position += 1

    return -1  # Value not found
