def merge(left,right):
    result = []
    while (len(left)!= 0 and len(right)!=0):
        if (left[0] > right[0]):
            result.append(right.pop(0))
        else:
            result.append(left.pop(0))
    for i in left:
        result.append(i)

    for i in right:
        result.append(i)

    return result


def mergeSort(array):
    if (len(array)==1):
        return array
    midpoint = len(array)//2
    
    left = array[:midpoint]
    right = array[midpoint:]
    return merge(mergeSort(left),mergeSort(right))


print(mergeSort(list(map(lambda x : int(x) , input("Enter the array").split()))))
