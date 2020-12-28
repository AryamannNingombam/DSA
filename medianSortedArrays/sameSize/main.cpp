#include <iostream>
#include <vector>

using namespace std;
int mergeAndReturn(int arr1[],int arr2[],int size){
    int firstPointer{},secondPointer{},index{};

    int arr[size + 1];
    while (firstPointer < size  && secondPointer < size){
        if (index == size + 1)break;
        if (arr1[firstPointer] > arr2[secondPointer]){
                arr[index] = arr2[secondPointer];
                secondPointer++;
                index++;
        }else{
            arr[index]  = arr1[firstPointer];
            firstPointer++;
            index++;
        }


    }
    while (index < size + 1 && firstPointer < size){
        arr[index] = arr1[firstPointer];
        firstPointer++;
        index++;
    };
    while (index < size + 1 && secondPointer < size){
        arr[index] =  arr2[secondPointer];
        secondPointer++;
        index++;
    }
    for (int i{};i<size+1;i++){
        cout << arr[i] << ' ';
    };
    cout << '\n';

    return (arr[size] + arr[size-1])/2;




}




int main(){
    int size{};
    cout <<"Enter the size of the arrays : ";
    cin >> size;
    int arr1[size],arr2[size];
    cout << "Enter the first array items : ";
    for (int i{};i<size;i++){
        cin >> arr1[i];
    };
    cout << "Enter the second array items : ";
    for (int i{};i<size;i++){
        cin >> arr2[i];
    };
    cout << mergeAndReturn(arr1,arr2,size) << '\n';
    

    return 0;
}
