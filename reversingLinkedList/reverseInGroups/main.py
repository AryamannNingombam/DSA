class Node():
    def __init__(self,data,next):
        self.data = data
        self.next = next


def returnResult(head,k):
    previous = None
    current =head
    next = None
    counter = 0
    while (counter < k and current):
        next = current.next
        current.next= previous
        previous = current
        current = next

    if next : 
        head = returnResult(next,k)
    return previous