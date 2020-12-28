#include <iostream>


//Finding the pivot point in an sorted array;


int findPivot(int arr[],int size,int left,int right){
    if (arr[0] < arr[size-1])return -1;

    const int midpoint = (left+right)/2;
    if (arr[midpoint]  > arr[midpoint+1])return midpoint+1;

    if (arr[midpoint] > arr[left])return findPivot(arr,size,midpoint+1,right);


    return findPivot(arr,size,left,midpoint-1);

}