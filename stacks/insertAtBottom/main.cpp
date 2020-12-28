#include <iostream>
#include <stack>
#include <memory>

using namespace std;
void display2(stack<int> s)
{
    while (!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    };
    cout << '\n';
};


class Answer{
    int size;
    stack<int> s;
    public:
    Answer(int s) : size{s}{};
    void push(int x){
        this->s.push(x);
    }
    int pop(){
        int temp = this->s.top();
        s.pop();
        return temp;
    };
    void pushBottom(int x){
        if (this->s.empty()){
            this->push(x);
            return;
        }
        int temp = this->pop();
        this->pushBottom(x);
        this->push(temp);
        return;


    };
    void takeInput(){
        int temp;
        cout << "Enter the values to add in the stack : ";
        for (int i{};i<this->size;i++){
            cin >>temp;
            this->s.push(temp);
        }
    }
    void display(){
        display2(this->s);
    }

};



int main(){
    int size,temp;
    cout << "Enter the number of elements in the stack : ";
    cin >> size;
    auto ptr = make_unique<Answer>(size);
    ptr->takeInput();
    cout << "Enter the new number to push : ";
    cin >>temp;
    ptr->push(temp);
    ptr->display();
    cout << "Enter the number to insert at bottom : ";
    cin >> temp;
    ptr->pushBottom(temp);
    ptr->display();


    return 0;
}