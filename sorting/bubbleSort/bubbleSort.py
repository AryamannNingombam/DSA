def bubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array)-i-1):
            if array[j+1]  < array[j]:
                array[j+1],array[j] = array[j],array[j+1]

    return array



print(bubbleSort(list(map(lambda x : int(x) , input("Enter the array").split()))))