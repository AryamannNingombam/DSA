
#include <iostream>
#include <vector>

using namespace std;

//O(n(sqr))
class Stack{
    friend ostream &operator<<(ostream &os,const Stack &s);
vector<int> mainVector;
public:
int pop(){
    int result = mainVector[mainVector.size()-1];
    mainVector.pop_back();
    return result;
}
void push(int i){
    mainVector.push_back(i);
};
int getSize(){
    return mainVector.size();
}



};

ostream &operator<<(ostream &os,const Stack &s){
    for (auto i : s.mainVector){
        os << i << ' ';
    };

    return os;
};



int main(){
    Stack test;
    test.push(5);
    test.push(4);
    test.push(3);
    test.push(2);
    test.push(1);

    cout << "Main : " << test <<endl;
    cout << "Making new and popping..." <<endl;
    Stack test2;
    int counter{},temp{};
    int totalSize = test.getSize();
    while (counter != totalSize-1){
        temp = test.pop();
        while (test.getSize() !=counter)test2.push(test.pop());
        test.push(temp);
        while (test2.getSize() != 0)test.push(test2.pop());
        counter++;
    };
    while (test.getSize() !=0)test2.push(test.pop());
    cout << "Cloned  : " << test2 <<endl;


}