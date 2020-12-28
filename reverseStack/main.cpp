#include <iostream>
#include <stack>

using namespace std;

void display(stack<int> s){
    while (!s.empty()){
        cout << s.top( ) << ' ';
        s.pop();
    };
    cout << '\n';
}

class Answer{
    public:
    stack<int> s;

    void addToBottom(int x){
        if (this->s.empty()){
            this->s.push(x);
            return;
        }
        int temp = this->s.top();s.pop();
        this->addToBottom(x);
        this->s.push(temp);


    }

    void reverse(){
        if (this->s.empty())return;
        int temp = s.top();s.pop();
        this->reverse();
        this->addToBottom(temp);


    }
};



int main(){
    int size,temp;
auto ans = Answer{};
cout << "Enter the number of elements in the stack : ";
cin >> size;
for (int i{};i<size;i++){
    cin >> temp;
    ans.s.push(temp);

}
display(ans.s);
ans.reverse();
display(ans.s);



return 0;
}