#include <iostream>


using namespace std;
int findRoot(int num){
int left{},right{num},mid{},ans{};

while (left<=right){
    mid = (left+right)/2;

    if (mid*mid > num){right= mid-1;}
    else {left = mid+1;ans=mid;}
};
return ans;



};



int main(){
    int number{};
    cout << "Enter the number : ";
    cin >> number;
    cout << findRoot(number) << endl;

    return 0;
}