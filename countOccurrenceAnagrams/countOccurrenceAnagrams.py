anagramToFind = input("Enter the string : ")
string = input("Enter the string in which you want to find the anagram : ")

firstPointer = 0
secondPointer = len(anagramToFind)
counter  = 0
while (secondPointer<=len(string)):
    if (sorted(anagramToFind) ==  sorted(string[firstPointer:secondPointer])):
        counter+=1
    firstPointer+=1
    secondPointer+=1

print(counter)


