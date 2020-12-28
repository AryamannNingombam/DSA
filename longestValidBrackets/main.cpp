#include <iostream>
#include <stack>
#include <string>
using namespace std;


int returnLongest(const string &str){
    stack<int> s;
    s.push(-1);
    int result = 0;
    for (int i{};i<str.length();i++){
        if (str[i]=='(')s.push(i);
        else {
            if (!s.empty())s.pop();

            if (!s.empty()){
                result = max(i  - s.top(),result);
            }else{
                s.push(i);
            }


        }
    }

    return result;
}