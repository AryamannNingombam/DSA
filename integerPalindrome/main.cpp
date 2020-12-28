#include <iostream>

using namespace std;

bool returnPalindrome(int number){
    if (number<0  || (number%10==0 && number!=0))return 0;
    int reversed{};
    while (number > reversed){
        reversed = (reversed*10) + (number%10);
        number /= 10;
    };
    return number == reversed || number == (reversed/10);

};


int main(){
    cout << boolalpha;
    cout << "12321 : " << returnPalindrome(12321) << endl;
    cout <<  "12534 : " << returnPalindrome(12534) << endl;
    cout << "12344544321 : " << returnPalindrome(123454321) << endl;

    return 0;
}