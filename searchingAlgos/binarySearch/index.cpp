#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int binarySearch(vector <int> &array,int left,int right,int numberToFind);




int main(){
    
    vector <int> test{3,1};
    cout << binarySearch(test,0,test.size()-1,1) << endl;
return 0;
}

int binarySearch(vector <int> &array,int left,int right,int numberToFind){
    //Error handling;
if (right>=left){
int midpoint = (left+right)/2;

    if (array[midpoint]==numberToFind)return midpoint;
    else if (array[midpoint] < numberToFind){
       return binarySearch(array,midpoint+1,right,numberToFind);
    }else if (array[midpoint]> numberToFind){
       return binarySearch(array,left,midpoint-1,numberToFind);
    };
};
    

    return -1;



}