#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int returnCount(const string &s,const string &word){
    const int length = word.length();
    int counter{},firstPointer{},secondPointer = length - 1;

    while (secondPointer < s.length()){

        if (s[firstPointer] == word[0] && s[secondPointer] == word.back()){
            counter += ((s.substr(firstPointer,length) == word));
        }
        secondPointer++;
        firstPointer++;
    }

    return counter;

}


int main(){
    fstream file;
    file.open("aaa.txt");


if (file.is_open()){

    string s,word,temp;
    while (getline(file,temp)){
        s += temp;
    };
    cout << "Enter the word : " ;
    cin >> word;

    cout << returnCount(s,word) << '\n';

    file.close();
}else{
    cout << "ERROR!\n";
}



    return 0;
}
