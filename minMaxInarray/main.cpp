#include <iostream>
#include <memory>
#include <climits>

using namespace std;

class MinMax{
    public:
        int max;
        int min;
    MinMax() : max{INT_MIN},min{INT_MIN}{
        cout << "Constructor called!\n";
    };
    ~MinMax(){
        cout << "Destructor called!\n";
    }

};


shared_ptr<MinMax> getResult(int arr[],int size){
    if (size == 0)return nullptr;
    auto result = make_shared<MinMax>();
    
    int index{};
    if (size%2 == 0){
        result->max = max(arr[0],arr[1]);
        result->min = min(arr[0],arr[1]);
        index = 2;
    }else{
        result->min = arr[0];
        result->max = arr[0];
        index = 1;
    }
    while (index < size){
        result->max = max(result->max,arr[index]);
        result->max = max(result->max,arr[index+1]);
        result->min = min(result->min,arr[index]);
        result->min = min(result->min,arr[index+1]);
        index+=2;
    }



    return (result);
}



int main(){
    // #ifndef INPUT_OUTPUT
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int size{};
    cin >> size;
    int arr[size];
    for (int i{};i<size;i++){
        cin  >> arr[i];
    };
    cout << "Calling function....\n";
    shared_ptr<MinMax> result = getResult(arr,size);
    cout << "Min : " << result->min << "\n";
    cout << "Max : " << result->max << '\n'; 


    
    return 0;
}