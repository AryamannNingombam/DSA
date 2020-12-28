#include <iostream>

// DOLLAR - 100
// QUARTER - 25
// NICKEL - 10
// DIME  - 5
// PENNY - 1
using namespace std;

int main(){
     int dollarToCent{100}
   ,quarterToCent{25}
 ,nickelToCent{10}
    ,dimeToCent{5};




    int totalCentsLeft{0};
    cout << "Enter the cents you need the change for  : ";
    cin >> totalCentsLeft;
    const int initialResult{totalCentsLeft};

 int totalDollars{0}, totalQuarter{0}, 
 totalNickel {0}, totalDime {0}, totalPenny {0};

 totalDollars = totalCentsLeft/dollarToCent;
 totalCentsLeft %= dollarToCent;
 
 totalQuarter = totalCentsLeft/quarterToCent;
 totalCentsLeft %= quarterToCent;
 
 totalNickel = totalCentsLeft/nickelToCent;
 totalCentsLeft %= nickelToCent;
 
 totalDime= totalCentsLeft/dimeToCent;
 totalCentsLeft %= dimeToCent;
 

 




   totalPenny = totalCentsLeft;
   cout << endl;
    cout << "Total Cents : " << initialResult << endl;
    cout << "Dollars : " <<  totalDollars << endl; 
    cout << "Quarters : " <<  totalQuarter << endl; 
    cout << "Nickels : " <<  totalNickel << endl; 
    cout << "Dimes : " <<  totalDime << endl; 
    cout << "Pennies : " <<  totalPenny << endl; 
 cout << endl;
    
     



    



    return 0;
    

}
