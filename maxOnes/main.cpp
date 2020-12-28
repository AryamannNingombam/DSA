#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
using vec = vector<vector<int>>;


int getMaxOnes(const vec &v){
int counter{};
int maxNum = INT_MIN;
int i{},j{static_cast<int>(v[0].size()-1)};
while (i != v.size()){
    if (j==0 && v[i][j] == 1)counter++;


    if ( v[i][j] == 0 || j==0){
        i++;
        j = static_cast<int>(v[i].size()-1);

        maxNum  = max(maxNum,counter);

        counter = 0;
    }else{
        j--;
        counter++;
    };
};
return maxNum;

};

int main(){
    vec test{{0,1,1,1,1,1,1,1}};
    cout << getMaxOnes(test) <<endl;

    return 0;
}