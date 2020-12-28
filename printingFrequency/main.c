#include <stdio.h>



void display(int arr[],int size){
    for (int i = 0;i<size;i++){
        printf("%i ",arr[i]);
    };
    printf("\n");
    return;
};

void returnFrequency(int arr[],int size){
    for (int i=0;i<size;i++){
        arr[i]--;
    };
    for (int i = 0;i<size;i++){
        arr[arr[i] % size] += size;
    };
    for (int i = 0;i<size;i++){
        arr[i] /= size;
    };


}






int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%i",&size);
    int arr[size];
    printf("Enter the elements : " );
    for (int i = 0;i<size;i++){
        scanf("%i",&arr[i]);
    };
    display(arr,size);
    returnFrequency(arr,size);
    display(arr,size);

    return 0;
}