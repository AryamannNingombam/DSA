#include <iostream>
#include <vector>

using namespace std;

void display(const vector<int> &v){
    for (int i{};i<v.size();i++){
        cout << v[i] << " ";
    };
    cout << endl;
    return;
};

void selectionSort(vector<int> &v){

for (int i{};i<v.size();i++){
    for (int j{i};j<v.size();j++){
        if (v[j] < v[i]){
            int temp{v[j]};
            v[j] = v[i];
            v[i] = temp;
        };
    };
};



return;
};



int main(){
    vector<int> test{4,2432,3,42
,324524,23423,452,3,4,54,56,7,58,57,
56756,5,3,4,7,5,75,673,134,637,24,356,454654,
2567,45,63,25,453,42,63,4345,6,34,5,6,24,
2553,6,74,5,4};
selectionSort(test);
display(test);
    // int size{};
    // cout << "Enter the number of items : ";
    // cin >> size;
    // cout << "Enter the numbers : ";
    // vector<int>mainVector(size);
    // for (int i{};i<size;i++){
    //     cin >> mainVector[i];
    // };
    // cout << "Given vector : ";
    // display(mainVector);
    // cout << "Sorting..." << endl;
    // cout << "Sorted array -> ";
    // selectionSort(mainVector);
    // display(mainVector);

    return 0;
}