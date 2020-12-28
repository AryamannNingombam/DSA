def checkRotation(s1,s2):
    if (len(s1) != len(s2)):
        return False
    s1 = s1*2
    return (s1.count(s2)  > 0)


[string1,string2] = input("Enter the strings : ").split()

print(checkRotation(string1,string2))
