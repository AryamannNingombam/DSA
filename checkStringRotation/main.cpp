#include <iostream>
#include <string>


using namespace std;

bool returnRotation(const string &s1,const string &s2){
    if (s1.length() != s2.length())return false;

    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);





};



int main(){
    int testCases;
    cout << "Enter the number of test cases : ";
    cin >> testCases;
    string s1,s2;
    for (int _{};_<testCases;_++){
        cin >> s1 >> s2;
        cout << boolalpha;
        cout << "Are they rotations ? " << returnRotation(s1,s2) << '\n';

    }


    return 0;
}