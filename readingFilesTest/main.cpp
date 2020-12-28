#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;




int main(){
 fstream newFile;
 newFile.open("hamlet.txt",ios::in);
   string full{};

int counter = 0;

if (newFile.is_open()){


  
    while (getline(newFile,full)){
        for (char i : full){
    if (tolower(i) == 'h')counter++;
    }
    };
    newFile.close();
}



cout << "Hamlet : " << counter <<endl;

    return 0;
}