class Solution():
    def reverse(self,arr,left,right):
        while (left < right):
            arr[left],arr[right] = arr[right],arr[left]
            left +=1
            right-=1
        return
    def rotate(self,arr,size,num):
        self.reverse(arr,0,num-1)
        self.reverse(arr,num,size-1)
        self.reverse(arr,0,size-1)
        return



test =Solution()


arr = list(map(int,input().split()))
num = int(input())
print(arr)
test.rotate(arr,len(arr),num)
print(arr)