length = {}
def getResult(arr):
    for i in range(len(arr)):
        length[i] = 1
        for j in range(i):
            if (arr[j] < arr[i]):
                length[i] = max(length[i],length[j] + 1)

    return max(length.values())




print(getResult([6,2,5,1,7,4,8,3]))