class Node():
    
    def __init__(self,data,next=None):
        self.data  = data
        self.next= next

    

class LinkedList():
    def __init__(self):
        self.head = None

    def insertFirst(self,data):
        self.head = Node(data,self.head)

    def size(self):
        node  = self.head
        if (not node):
            return 0

        counter = 0
        while node :
            node = node.next
            counter+=1
        return counter

    def getFirst(self):
        
        return self.head

    def getLast(self):
        node = self.head
        if not node :
            return None
        while node.next:
            node = node.next
        return node

    def clear(self):
        self.head = None
    
    def removeFirst(self):
        if (self.head and self.head.next):
            self.head = self.head.next

    def removeLast(self):
        if (self.head):
            node = self.head
            prevNode = self.head
            while (node.next):
                prevNode = node
                node  = node.next
            prevNode.next = None

    def insertLast(self,data):
        if (self.head):
            node = self.head
           
            while (node.next):
                
                node  = node.next
            node.next = Node(data)

        else:
            self.head = Node(data)

    def getAt(self,index):
        if (self.head):
            counter = 0
            node = self.head
            while (counter!= index and node.next):
                node = node.next
                counter += 1

            return node


    def getAll(self):
        allNodes = []
        for i in range(self.size()):
            allNodes.append(self.getAt(i).data)
        return allNodes

    def reverse(self):
        previous =None
        current =self.head
        next  = None
        while (current):
            next=  current.next
            current.next= previous
            previous = current
            current = next

        self.head = previous
        return





def reverseLinkedList(head,previous):
    if (not head):
        return previous
    temp = head.next
    head.next =previous
    return reverseLinkedList(temp,head)
        
        


newLinkedList = LinkedList()
newLinkedList.insertFirst(22)
newLinkedList.insertFirst(10)
newLinkedList.insertFirst(9)
newLinkedList.insertFirst(8)
newLinkedList.insertFirst(7)
newLinkedList.insertFirst(6)
newLinkedList.insertFirst(6)
newLinkedList.insertFirst(5)
newLinkedList.insertFirst(4)
newLinkedList.insertFirst(3)
newLinkedList.insertFirst(2)
newLinkedList.insertFirst(1)
newLinkedList.insertFirst(0)
print(newLinkedList.getAll())

newLinkedList.head = reverseLinkedList(newLinkedList.head,None)
print(newLinkedList.getAll())
            


       

    
        
            





    
    

