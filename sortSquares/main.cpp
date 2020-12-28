#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

using vec = vector<int>;




ostream &operator<<(ostream &os,vec &v){
    for (auto i : v){
        os << i << ' ';
    };
    return os;
}

vec returnSquares(vec &v){
//Initializing new vector with all values as 0;
vec result(v.size(),0);

//Two pointers pointers to values in 'v';
int firstPointer = 0;
int secondPointer = v.size()-1;

//Index used to add values to 'result';
int index= v.size()-1;


//While the firstPointer does not get ahead of the rightPointer
while (firstPointer <= secondPointer){
    //comparing the absolute of the items in the array;
    if (abs(v[firstPointer]) > abs(v[secondPointer]) ){
        //if the item on the firstPointer index is greater, we slide one index ahead
        //and replace the 0 in the 'result' vector with the power;
        result[index] = pow(v[firstPointer],2);
        firstPointer++;
    }else{
        //if the item on the secondPointer is greater, we slide one index back 
        //and replace the 0 in the 'result' vector with the power;

        result[index] = pow(v[secondPointer],2);
        secondPointer--;
    }

    //decrementing the index to go to the previous index 
    //after the current one has been filled;
    index--;

}




return result;


}



int main(){
    int size{};
    cout << "Enter the size of the array : ";
    cin >> size;
    vec mainVec(size,0);
    for (int i{};i<size;i++){
        cin >> mainVec[i];
    };
    cout << "Input : " << mainVec <<endl;
    vec result = returnSquares(mainVec);
    cout << "Result : " << result <<endl;


    return 0;
}