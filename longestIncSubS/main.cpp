#include <iostream>
#include <climits>
using namespace std;


int getMax(int arr[],int size){
    int temp = INT_MIN;
    for (int i{};i<size;i++){
        temp = max(temp,arr[i]);
    };
    return temp;
};

int main(){
    int size{};
    cout << "Enter the size : ";
    cin >> size;
    int arr[size];
    int length[size];

    for (int i{};i<size;i++){
        cin >> arr[i];
    };
    cout << "Calculating....\n";
    for (int i{};i<size;i++){
        length[i] = 1;
        for (int j{};j<i;j++){
            if (arr[j] < arr[i]){
                length[i] = max(length[i],length[j] + 1);
            }
        }
    }
    cout << getMax(length,size) << '\n';



    return 0;
}