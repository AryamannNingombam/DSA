#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


int returnLongestRepeating(string);

int main(){
    string input{};
    cout << "Enter the string : ";
    getline(cin,input);
   cout << returnLongestRepeating(input) << endl;


    return 0;
}


int returnLongestRepeating(string s){
    vector <int> count(300,0);
    if (s.size()==0)return 0;
    count[s[0]]++;
    int answer{};
    int i{},j{};
    while (j != s.size()-1){
        if (count[s[j+1]]==0){
            count[s[j+1]]++;
            j++;
            answer = max(answer,j-i+1);
         }else{
             count[s[i]]--;
             i++;
         };

    };
    return answer;


}