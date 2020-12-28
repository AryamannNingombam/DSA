def removeDup(array):
    answer = []
    for i in array:
        if i in answer:
            continue
        answer.append(i)

    return answer


print(removeDup([1,2,2,3,3,24,34,34,54,56,677,677]))