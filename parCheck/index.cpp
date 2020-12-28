#include <iostream>
#include <vector>
#include <string>

using namespace std;
const vector <char>openingParams{'(','[','{'};
const vector <char> closingParams{')',']','}'};


class Stack{
 vector<char> mainVector{};

public:
char pop(){
    if (mainVector.size() == 0)return 'X';
    char result{mainVector[mainVector.size()-1]};
    mainVector.pop_back();
    return result;

};
char peek(){
    return mainVector[mainVector.size()-1];
};

void push(char s){
    mainVector.push_back(s);
};

};

bool includes(vector<char> params,char s){
    for (char i :params){
        if (i == s)return true;
    };
    return false;
}


bool parCheck( string s){
Stack mainStack;
for (char i : s){
    if (includes(openingParams,i)){
        mainStack.push(i);
    }else if (includes(closingParams,i)){
        char previousBracket{mainStack.pop()};

        switch(i){
            case ']':{
                
                if (previousBracket != '[')return false;
                break;

            }
            case '}':{
                if (previousBracket != '{')return false;
                break;
            }
            case ')':{
                if (previousBracket != '(')return false;
                break;
            }
            };
    }else{
            continue;
        }
};

return true;




};




int main(){
    
     string input{};
     cout << "Enter the string : ";

     cin >> input;

   cout << boolalpha;
   cout << parCheck(input) << endl;

    return 0;
}