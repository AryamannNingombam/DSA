#include <iostream>
#include <vector>
using namespace std;
using vec = vector<int>;
class Solution{
    
    vec v;
    int size;
    friend ostream &operator<<(ostream &os,const Solution &s);

    void swap(int &left,int &right){
        int temp = this->v[left];
        this->v[left] = this->v[right];
        this->v[right] =temp;
        return;
        
    }
    void reverse(int left,int right){
        while (left < right){
            swap(left,right);
            left++;
            right--;
        }
    }


    public :
    Solution(vec vv,int s) : v{vv},size{s}{};

    void rotate(const int num){
        this->reverse(0,this->size-1);
        this->reverse(0,num-1);
        this->reverse(num,this->size-1);
        return;
    }
    




};


ostream &operator<<(ostream &os,const Solution &s){
    for (auto i  : s.v){
        os << i << ' ';
    };
    return os;

}



int main(){
    int size{};
    cout << "Enter the size of the array : ";
    cin >> size;
    vec v(size,0);
    cout << "Enter the elements : ";
    for (int i{};i<size;i++){
        cin >> v[i];
    };
    int rot{};
    cout << "Enter the rotation value : ";
    cin >> rot;
    auto sol  = Solution(v,size);
    cout << sol << '\n';
    sol.rotate(rot);
    cout << sol << '\n';

    return 0;
}