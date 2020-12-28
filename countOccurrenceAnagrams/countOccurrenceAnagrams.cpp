#include <iostream>
#include <string>

using namespace std;

int main(){
    string stringToMatch{},mainString{};
  
    cout << "Enter the string to match : ";
    cin >> stringToMatch;
      string displayString{stringToMatch};
    sort(displayString.begin(),displayString.end());
    cout << "Enter the main string : ";
    cin >> mainString;
    cout << "DisplayString : " << displayString << endl;
    int counter{},firstPointer{0},secondPointer{static_cast<int>(stringToMatch.size())};
    while (secondPointer <= mainString.size()){
       string temp{mainString.substr(firstPointer,secondPointer)};
cout << "First" << firstPointer << endl;
cout <<"Second" << secondPointer << endl;
cout << "Temp : " << temp << endl;
        sort(temp.begin(),temp.end());
        
        if (temp == displayString){counter++;};


        firstPointer++;
        secondPointer++;
    };

    cout << "The number of occurrences of " <<
     stringToMatch <<" is "
      << counter << endl;
 //Fail
    return 0;
}