def binarySearch(arr,key,left,right):

	if (left<=right):

		midpoint = (left + right)//2
		if (arr[midpoint] == key):
			return midpoint
		elif (arr[midpoint]>=key and arr[midpoint + 1] < key):
			return midpoint+1
		elif (ar)

	return -1