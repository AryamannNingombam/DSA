# Given a list which initially contains 0, the following 
# queries can be performed:

# 0 X: add X to the list
# 1 X: replace each element “A” of 
# the list by A^X, where ^ is the xor operator.


numberOfCases = int(input("Enter the number of cases: "))
operatorList = [0]
for i in range(numberOfCases):
    operator,number = list(map(lambda x:int(x),input('Enter the number: ').split()))

    if operator == 0:
        operatorList.append(number)
    else:
        
        for index,j in enumerate(operatorList):
            operatorList[index] = j^number


print(sorted(operatorList))
    