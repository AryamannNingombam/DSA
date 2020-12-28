#include <iostream>
#include <memory>

using namespace std;

class Node;
// template<typename T>
using sp = shared_ptr<Node>;

//Using reverse;




class Node {
    public:
    sp next;
    int data;

    Node(int d,sp n):next{n},data{d}{};

};


sp reverseNode (sp  n){
    sp previous = nullptr;
    sp current =n;
    sp next = nullptr;
    while (current){
        next = current->next;
        current->next= previous;
        previous = current;
        current = next;


    };
    return previous;

}
sp addOne(sp s){
    sp temp = nullptr;
    sp it = s;
    int num{1};
    int carry{-1};
    while (carry != 0 && it){
        it->data = (it->data) + num;
        carry = (it->data)/10;
        num = (it->data)%10;
        temp = it;
        it = it->next;
    };

    if (carry > 0){
        temp->next = make_shared<Node>(carry,nullptr);
    };
    return reverseNode(s);


}




int main(){




    return 0;
}