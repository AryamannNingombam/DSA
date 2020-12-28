#include <iostream>
#include <string>
#include <vector>


using namespace std;
using intVector = vector<int>;


string multiplyNumbers( string &s1, string  &s2){
    if (s1 == "0" || s2 == "0")return "0";
    bool firstNegative  =false,secondNegative  =false;
    if (s1[0] == '-'){
        firstNegative = true;
        s1 = s1.substr(1);
    };
    if (s2[0] == '-'){
        secondNegative = true;
        s2 = s2.substr(1);
    };

    const int length1 = s1.length();
    const int length2 = s2.length();
    intVector vectorResult(length1 + length2,0);
    int carry,tempSum,i1=0,i2=0,tempFirst,tempSecond;
    for (int i = length1 - 1;i>=0;i--){
        carry = 0;
        i1 = 0;
        tempFirst = s1[i]  - '0';
        for (int j = length2 - 1;j>=0;j--){
            tempSecond = s2[j] - '0';
            tempSum  = tempFirst *tempSecond + vectorResult[i1 + i2] + carry;
            carry = tempSum  /10;
            vectorResult[i1 + i2] = tempSum  %10;
            i2++;
        };
        if (carry > 0){
            vectorResult[i1 + i2] += carry;
        };
        i2++;
    }


    string result;
    int i;
    for (i = length1 + length2 - 1;i>=0;i--){
        if (vectorResult[i] !=0)break;
    };

    if ((firstNegative && secondNegative) || (!firstNegative && !secondNegative))
        return result;

    return '-' + result;

};
