

def binarySearch(array,left,right,numberToFind):
    if (right<left):
        return -1
    
    midpoint =  (left+right)//2

    if array[midpoint]==numberToFind:
        return midpoint
    elif array[midpoint] > numberToFind:
        return  binarySearch(array,left,midpoint-1,numberToFind)

    return binarySearch(array,midpoint+1,right,numberToFind)


print(binarySearch([1,2,3,4,5,6,7,56,89,900],0,9,2000))
