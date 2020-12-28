#include <iostream>
#include <map>
#include <climits>

using namespace std;
using mp = map<int,int>;


//Greedy 
int getResult(int arr[],int size,int k){
    sort(arr,arr+size);
    int counter{};
    int balance{k};
    int index = size-1;
    while (balance>0){
        int tempCoin = arr[index];
        while (balance >= tempCoin){
            cout << "Coin used : " << tempCoin << '\n';
            balance -= tempCoin;
            counter++;
        };
        index--;

    }



    return counter;
}

//Dynamic
mp m;
int getDynamicResult(int arr[],int size,int s){
    if (m[s] !=0)return m[s];
    if (s < 0)return 0;
    if (s == 0)return 0;
    int best = INT_MAX;
    for (int i{};i<size;i++){
        best = min(best,getDynamicResult(arr,size,s - arr[i]) + 1);

    }
    m[s] = best;
    return best;

}



int main(){
    int size{};
    cout << "Enter the size : ";
    cin >> size;
    int arr[size];
    cout << "Enter the coins : ";
    for (int i{};i<size;i++){
        cin >> arr[i];
    };
    int sum{};
    cout  << "Enter the sum : ";
    cin >> sum;
    cout << getResult(arr,size,sum) << '\n';
    cout << getDynamicResult(arr,size,sum) << '\n';

    return 0;
}