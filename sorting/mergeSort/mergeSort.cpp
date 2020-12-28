#include <iostream>
#include <deque>

using namespace std;




deque<int> merge( deque<int> &left, deque<int> &right){
deque<int> result{};

while (left.size() != 0  && right.size()!=0){
    if (left[0] < right[0]){

        result.push_back(left[0]);
        left.pop_front();
        }
    else{
        result.push_back(right[0]);
        right.pop_front();
    };

};

if (left.size() == 0){
    for (int i : left){
        result.push_back(i);
    };
};
if (right.size() == 0){
    for (int i : right){
        result.push_back(i);
    };
};

return result;



};



deque<int> mergeSort(deque<int> &mainDeque){
    if (mainDeque.size() == 1){
        return mainDeque;
    };
    const int midpoint = mainDeque.size()/2;
    //Slicing to do

}



int main(){
    return 0;
}