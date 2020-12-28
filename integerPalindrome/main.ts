



function checkPalindrome(n : number){
    if (n<0)return false;
    if (n <10)return true;
    let reverse = 0;
    while (reverse < n){
        reverse =  reverse*10 +    n%10;
        n = Math.floor(n/10);
    };
    return reverse == n || n == Math.floor(reverse/10);


}





console.log("This is a program to find out if a number is a palindrome or not.");

console.log("Check for 123454321")
console.log(checkPalindrome(123454321));
console.log("Check for 12344321")
console.log(checkPalindrome(12344321));
console.log("Check for 1234")
console.log(checkPalindrome(1234));
console.log("Check for 111111")
console.log(checkPalindrome(111111));
