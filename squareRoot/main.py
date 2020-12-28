import math


def floorSquareRoot(number):
    left = 0
    right = number
    midpoint = 0
    answer = 0
    while (left <=right):
        midpoint = math.floor((left+right)/2)
        if midpoint**2 > number:
            right = midpoint-1
        else:
            left= midpoint+1
            answer  = midpoint
    return answer

def ceilSquareRoot(number):
    left = 0
    right = number
    midpoint = 0
    answer = 0
    while(left<=right):
        midpoint = math.floor((left+right)/2)
        if (midpoint**2 >=number):
            answer = midpoint
            right = midpoint -1
        else:
            left = midpoint +1
    return answer


number = int(input('Enter the number : '))

print(floorSquareRoot(number))
print(ceilSquareRoot(number))