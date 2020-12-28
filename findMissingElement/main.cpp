#include <iostream>


using namespace std;
int findMissingElement(int arr[],int size){
int left =0,right =size-1,midpoint;
while (left <= right){
midpoint  = (left + right)/2;  

if (arr[midpoint]!=midpoint+1 && arr[midpoint-1] ==midpoint)return midpoint+1;
else if (arr[midpoint]!=midpoint+1)right=midpoint-1;
else left = midpoint+1;


};
return -1;


};



int main(){
    int size;
    cout << "Enter the number of elements in the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements : ";
    for (int i = 0;i<size;i++)cin >> arr[i];
    int result = findMissingElement(arr,size);
    if (result!=-1){
        cout << "Element " << result << " Missing\n";
    }else{
        cout << "No element missing\n";
    };

    return 0;
}