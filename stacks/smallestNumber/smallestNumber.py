class Stack():
    def __init__(self):
        self.mainStack = []
        self.minCheckStack = []

    def pop(self):
        if len(self.mainStack)!=0:

            self.minCheckStack.pop()
            return self.mainStack.pop()

    def add(self,data):
        self.mainStack.append(data)
        if (len(self.minCheckStack) ==0):
            self.minCheckStack.append(data)
        else:

            if (data > self.minCheckStack[-1]):
                    self.minCheckStack.append(self.minCheckStack[-1])
            else:
                    self.minCheckStack.append(data)

    def peek(self):
        if (len(self.mainStack)):
            return self.mainStack[-1]

    def checkMin(self):
        if (len(self.minCheckStack)):
            return self.minCheckStack[-1]


newStack = Stack()
newStack.add(3)
newStack.add(4)
newStack.add(2)
newStack.add(0)
newStack.add(19)
newStack.add(0)
newStack.add(399)
print(newStack.mainStack)
print(newStack.checkMin())
newStack.pop()
newStack.pop()
newStack.pop()
newStack.pop()
newStack.pop()
print(newStack.checkMin())
print(newStack.mainStack)
