#include <iostream>


using namespace std;

void display(int arr[],const int size){
    for (int i{};i<size;i++){
        cout  << arr[i] << ' ';
    };
    cout << '\n';
    return;
}


void returnFrequency(int arr[],const int size){
    for (int i{};i<size;i++){
        //To make it easy to take indexes 
        //as values can range from [1,N];
        arr[i]--;
        //% used to get index ;
        arr[arr[i]  % size ] += size;
    };
    for (int i{};i<size;i++){
        //Changing back to the frequency;
        arr[i]/=size;
    };
    return;


}



int main(){
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the array items : ";
    for (int i{};i<size;i++){
        cin >> arr[i];
    };
    display(arr,size);
    returnFrequency(arr,size);
    display(arr,size);


    return 0;
}