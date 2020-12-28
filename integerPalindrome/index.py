def returnPalindrome(number):
    comparison = 0
    while number > comparison:
        comparison = (comparison*10) + number%10
        number //= 10

    return (comparison==number) or ((comparison//10) == (number))



print("12321 : " + str(returnPalindrome(12321)) )  
print( "12534 : " + str(returnPalindrome(12534)) )  
print("12344544321 : " + str(returnPalindrome(123454321)) ) 


