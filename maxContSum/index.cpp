#include <iostream>
#include <climits>
using namespace std;
//Only for negative + positive values;

//Improved version in Kadane's Algorithm;
int  getMaxSum(int mainArray[],const int size);

int main(){
    int size{};
    cout << "Enter the number of items in the array : ";
    cin >> size;
    int mainArray[size];
    cout << "Enter the array separated by spaces : ";
    for (int i{};i<size;i++){
        cin >> mainArray[i];
    };

    cout << "The max sum is : " << getMaxSum(mainArray,size) << endl; 


return 0;
};


int  getMaxSum(int mainArray[],const int size){
    int maxSum{INT_MIN},currentMax{0};
    for (int i{};i<size;i++){
        currentMax += mainArray[i];
        maxSum = max(maxSum,currentMax);
        if (currentMax <0 )currentMax = 0;

    };
    return maxSum;

}
