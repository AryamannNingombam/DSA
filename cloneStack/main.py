#more optimized

class StackNode():
    def __init__(self,data,next = None):
        self.data = data
        self.next = next


class Stack():
    def __init__(self):
        self.head = None

    def push(self,node):
        temp = self.head
        self.head = node
        node.next = temp 
    def length(self):
        counter = 0
        temp = self.head
        while (temp):
            counter+=1
            temp = temp.next
        return counter


    def pop(self):
        temp = self.head
        if (not temp):
            return -1
        else:
            self.head = self.head.next
            return temp

    def display(self):
        temp = self.head
        while (temp):
            print(temp.data,sep=' ')
            temp = temp.next
        return 
    def reverse(self):
        next = None
        previous = None
        current = self.head
        while (current):
            next=current.next
            current.next = previous
            previous = current
            current =  next

        self.head = previous


test = Stack()

test.push(StackNode(1))
test.push(StackNode(2))
test.push(StackNode(3))
test.push(StackNode(4))
test.push(StackNode(5))
test.push(StackNode(6))
print("Original : ")
test.display()


final  = Stack()
test.reverse()
while (test.length() !=0):
    final.push(test.pop())

print("Final : ")
final.display()