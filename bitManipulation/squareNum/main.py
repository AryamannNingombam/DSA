#WITHOUT MEMOIZATION
def square(n):
    if (n<2):
        return n
    if (n&1):
        return ((square(n//2)<<2) + ((n//2)<<2) + 1)
    return square(n//2)<<2







testCases = int(input("Enter the number of test cases : "))

for _ in range(testCases):
    num = int(input("Enter the number : "))
    print(f"The square of {num} is {square(num)}")
