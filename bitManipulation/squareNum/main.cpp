#include <iostream>
#include <map>
#define LL long long
using namespace std;



LL getSquare(int x,map<int,int> &cache){
    if (x <= 1)return x;
    
const LL half  = x>>1;
if (cache[x] != 0)return cache[x];

cache[x] =  ((x&1) ? ((getSquare(half,cache) << 2) + (half<<2) + 1)
 : ((getSquare(half,cache) <<2)));
    
return cache[x];


}


int main(){
    int testCases,num;
    cout << "Enter the number of test cases : ";
    cin >> testCases;
    for (int i{};i<testCases;i++){
        map<int,int> cache;
        cout << "Enter the number : ";
        cin >> num;
        printf("The square of the number %d is %lld\n",num,getSquare(abs(num),cache));

    }
}