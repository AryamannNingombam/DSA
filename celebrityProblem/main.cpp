#include <iostream>
#include <vector>

using namespace std;

bool check(int row,int col,const vector<vector<int>> &v){
    return v[row][col];
}


//Two pointer approach
int returnCelebrity(const vector<vector<int>> &v,const int n){
int firstPointer = 0,secondPointer = n-1;

while (firstPointer < secondPointer){
//first knows second, so not a celebrity
if (check(firstPointer,secondPointer,v))firstPointer++;
//first doesn't know second, so second also not a celebrity;
else secondPointer--;
};

for (int i{};i<n;i++){
    if (i==firstPointer)continue;
    //if first knows any one or i doesn't know first;
    if (check(firstPointer,i,v) || !check(i,firstPointer,v))return -1;
}

return firstPointer;
}





 int main(){
     cout << "COMPILED!\n";

     return 0;
 }