import time


time1 = time.time()
class Stack():
    def __init__(self):
        self.stackArray = []

    def pop(self):
        if (len(self.stackArray)!=0):
            return self.stackArray.pop()
        return None

    def add(self,data):
        self.stackArray.append(data)

    def peek(self):
       
        if (len(self.stackArray)!=0):
             return self.stackArray[-1]
        return None


def paramsCheck(string):
    checkingStack = Stack()
    openingParams = ['(','{','[']
    closingParams = [')','}',']']
    passingCombo = ['()','{}','[]']

    for letter in string:
        if letter in openingParams:
            checkingStack.add(letter)
        elif letter in closingParams:
            popped = checkingStack.pop()
            if not popped:
                return False
            checkLetter= popped + letter
            if checkLetter not in passingCombo:
                return False

    return True


print(paramsCheck('{{{{{[  }    {({[()]})} ]}}}}}')); #False;
print(paramsCheck('{{{{{[      {({[()]})} ]}}}}}')); #True;
print(paramsCheck('{{{{{[{({[()]})}     ]}}}}}')); #True;
print(paramsCheck('{{{{{[  }  {([}])}  {({[()]})} ]}}}}}')); #False;
print(paramsCheck('{{{{{[   ([[[((((()))))]]])    {({[()]})} ]}}}}}')); #True;
print(paramsCheck('[()]{}{[()()]()}')); #True;
print(paramsCheck('[(])')); #False;
print(paramsCheck('))'));#False
print(paramsCheck('{}{(}))}'));#False

print((time.time() - time1)*1000)