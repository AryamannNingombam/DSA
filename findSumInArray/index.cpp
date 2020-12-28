#include <iostream>
#include <vector>
#include <set>

using namespace  std;

bool sortedArraySolution(const vector<int> &v,const int sum){
    int start{0},end{};
    end = v.size()-1;
    int sumOfElements{};
    while (start < end){
        sumOfElements = v[start] + v[end];
        if (sumOfElements == sum){
        cout << "Start : " << start << endl;
        cout << "End : " << end << endl;

            return true;
            };
        if (sumOfElements < sum)start++;
        else end--;
    };
    return false;

};
//[1,4,2,6,5,7]; 
//8
bool unsortedArraySolution(const vector<int> &v,int sum){
set<int> storage;
int cor{};
for (int i : v){
    cor = sum - i;
    set<int>::iterator it;
    it= storage.find(cor);
    if (it != storage.end()){
        cout << "Cor : " << cor << endl;
        cout << "i : " << i << endl;


        return true;
    }else{
        storage.insert(i);
    };
};

return false;



};



int main(){
    vector<int> test{-100,-50,1,2,3,4,5,6,7,8,9,10,58,200};
    int sum{};
    cin >> sum;

    cout << boolalpha;
    cout << sortedArraySolution(test,sum) << endl;
    vector<int> test2{1,4,2,5,7};
    cin >> sum;
    cout << unsortedArraySolution(test2,sum) << endl;

    return 0;
}
