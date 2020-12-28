

def selectionSort(array):
    for i in range(len(array)):
        for j in range(i,len(array)):
            if int(array[j]) < int(array[i]):
                array[j],array[i] = array[i],array[j]
    return array

print(selectionSort([4,2432,3,42
,324524,23423,452,3,4,54,56,7,58,57,
56756,5,3,4,7,5,75,673,134,637,24,356,454654,
2567,45,63,25,453,42,63,4345,6,34,5,6,24,
2553,6,74,5,4]))


