#include <iostream>

using namespace std;
int linearSearch(int *array,int size,int numberToFind);
int main(){
    int test[]{1,2,3,4,5,6,7,-1};
    cout << linearSearch(test,7,3) << endl;
    return 0;
}


int linearSearch(int *array,int size,int numberToFind){
    int count{};
while (*array!=-1){
    if (*array==numberToFind)return count;
    count++;
    array +=1;

};
return -1;
}