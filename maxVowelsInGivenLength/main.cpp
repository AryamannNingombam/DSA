#include <iostream>
#include <string>
#include<climits>
using namespace std;
bool isVowel(char a){
    return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
};


int result(string s,int k){
int counter{},maxCounter{INT_MIN};

int i{},j;
for (j=0;j<s.size();j++){
    if (isVowel(s[j]))counter++;

    if (j-i+1 == k){
        if (counter==k)return k;

        maxCounter = max(maxCounter,counter);
    if (isVowel(s[i]))counter--;
    i++;
    };

};
return maxCounter;



};



int main(){
    #ifndef QUESTION_ANSWER
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string inputString;
    int length{};
    cin >> inputString >> length;
    cout << result(inputString,length) <<endl;
    return 0;
}