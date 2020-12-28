#include <stdio.h>


void display(int arr[],int size){
    for (int i = 0;i<size;i++){
        printf("%i ",arr[i]);
    };
    printf("\n");
}

void reverse(int arr[],int left,int right){
    while (left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    } ;
    return;


}


void rotateArray(int arr[],int size,int num){
    reverse(arr,0,num-1);
    reverse(arr,num,size-1);
    reverse(arr,0,size-1);
    return;
}


int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%i",&size);
    int arr[size];
    printf("Enter the elements :" );
    for (int i = 0;i<size;i++){
        scanf("%i",&arr[i]);
    };
    int r;
    printf("Enter the rotation number : ");
    scanf("%i",&r);
    display(arr,size);
    rotateArray(arr,size,r);
    display(arr,size);

    return 0;
}