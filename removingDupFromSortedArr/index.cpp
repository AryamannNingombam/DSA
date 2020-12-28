//TODO
#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> removeDups(const vector<int> &v){
    set<int> test(v.begin(),v.end());
    return test;
}
template<typename T>
void display(const T &a){
    for (auto i : a){
        cout << i <<  ' ';
    };
    cout << '\n';
    return;

}

int main(){
    int size{};
    cout << "Enter the size of the array : ";
    cin >> size;
    vector<int> test(size);
    for (int i{};i<size;i++){
        cin >> test[i];
    };
    display(test);
    set<int> result = removeDups(test);
    display(result);
    
    
        return 0;
}