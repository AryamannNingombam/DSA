#include <iostream>


using namespace std;

int returnLongest(int arr[],int size,int k){
int firstPointer{},secondPointer{},totalSum{arr[0]},maxLength{};
while (secondPointer < size){
    if (totalSum == k){
        maxLength = max(maxLength,secondPointer-firstPointer+1);
        secondPointer ++;
        totalSum += arr[secondPointer];
    }else if (totalSum < k){
        secondPointer++;
        totalSum += arr[secondPointer];
    }else{
        totalSum -= arr[firstPointer];
        firstPointer++;
    }



}
if (secondPointer >size)return -1;


return maxLength;

}




int main(){
    int size{};
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i{};i<size;i++){
        cin >> arr[i];
    };
    int k{};
    cout << "Enter the sum you want to find : ";
    cin >> k;
    cout << "The length of the longest subarray for sum " << k << " is " << returnLongest(arr,size,k) <<endl;


    return 0;
}