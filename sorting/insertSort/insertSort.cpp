#include <iostream>
#include <vector>


using namespace std;

void insertSort(vector<int> &v){


for (int index{1};index<v.size();index++){
    int j{index-1};
    int value{v[index]};
    while (j>=0 && value < v[j]){
        v[j+1] = v[j];
        j--;
    };
    v[j+1] = value;
};


};


void display(const vector<int> &v){
    for (int i{};i<v.size();i++){
        cout << v[i] << " ";
    };
    cout << endl;

};

int main(){
    int size{};
    cout << "Enter the number of items in the vector : ";
    cin >> size;
    vector<int> mainVector(size);
    cout << "Enter the numbers separated by spaces : ";
    for (int i{};i<size;i++){
        
        cin >> mainVector[i];

    };
    display(mainVector);
    cout << "Sorting the array..." << endl;
    insertSort(mainVector);
    cout << "Sorted array -> " << endl;
    display(mainVector);
    return 0;
}

