#include <iostream>
using namespace std;

int findFirstBinary(int arr[],int size,int k,int left,int right){
    if (right>=left){
const int midpoint = (right+left)/2;
    if ((midpoint == 0 || arr[midpoint-1] < k) && arr[midpoint] == k){
        return midpoint;
    }else if (arr[midpoint] >= k){
        return  findFirstBinary(arr,size,k,left,midpoint-1);
    }else if (arr[midpoint] < k){
        return findFirstBinary(arr,size,k,midpoint+1,right);
    }
    }
    

    return -1;
};





int findLastBinary(int arr[],int size,int k,int left,int right){

    if (right >=left){
        const int midpoint = (left+right)/2;
        cout << arr[midpoint ] <<'\n';
        if (((midpoint == size-1) || arr[midpoint+1] > k ) && arr[midpoint] == k){
            return midpoint;
        }else if (arr[midpoint] >k ){
            return findLastBinary(arr,size,k,left,midpoint-1);
        }else{
            return findLastBinary(arr,size,k,midpoint+1,right);
        };

    };


    return -1;
}


int main() {
	//code
	int testCases{};
	cin >> testCases;
	for (int _{};_<testCases;_++){
	    int size{},num{};
	    cin >> size >> num;
	    int arr[size];
	    for (int i{};i<size;i++){
	        cin >> arr[i];
	    };
	    int temp = findFirstBinary(arr,size,num,0,size-1);
        int temp2  = findLastBinary(arr,size,num,0,size-1);
        if (temp == -1){
            cout <<-1 << '\n';
        }else
        {
            cout << temp << ' ' << temp2 << '\n'; 
        }
        
	}
	return 0;
}