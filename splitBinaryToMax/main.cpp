#include <iostream>
#include <string>

using namespace std;

int returnResult(string s){
    if (s.size() == 0 || s.size() == 1)return -1;
    int counter{0},oneCounter{},zeroCounter{};

    for (char c : s){
        if (c == '1')oneCounter++;
        else zeroCounter++;
        if (oneCounter == zeroCounter){
            counter++;
            

        }
    }
    if (oneCounter != zeroCounter)return -1;



    return counter;
}


int main(){
    int testCases{};
    cout << "Enter the test cases : ";
    cin >> testCases;
    string s;
    for (int _{};_<testCases;_++){
        cout << "Enter the string : ";
        cin >> s;
        cout << returnResult(s) << '\n';
    }
    


    return 0;
}

