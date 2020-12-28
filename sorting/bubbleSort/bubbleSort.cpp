#include <iostream>
#include <vector>


using namespace std;

void bubbleSort(vector<int> &v){
    if (v.size() == 0)return;

    for (int i{};i<v.size()-1;i++){
        for (int j{};j<v.size()-i-1;j++){
            if (v[j+1] < v[j]){
                int temp = v[j+1];

                v[j+1] = v[j];
                v[j] = temp;
            };
        };

    };
    return;
};

void display(const vector<int> &v){
    for (int i : v){
        cout << i << ' ';
    };
    cout << endl;

}


int main(){
    int size{};
    cout << "Enter the number of items : ";
    cin >> size;
    vector<int> mainVector(size);
    cout << "Enter the items separated by spaces : "; 
    for (int i{};i<size;i++){
        cin >> mainVector[i];
    };
    display(mainVector);
    cout << "Sorting using bubbleSort..." << endl;
bubbleSort(mainVector);
    cout << "Sorted array -> ";
    display(mainVector);

    return 0;
}