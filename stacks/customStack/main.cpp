#include <iostream>
#include <list>
#include <memory>


using namespace std;
using lst = list<int>;



class Stack{
    lst items;
    lst::iterator middle;

    public:
    Stack(){
        cout << "Stack Initialized!\n";
    };
    bool push(const int &value){
        
        this->items.push_front(value);
        if (this->items.size() == 1){
            this->middle = this->items.begin();
            }
        else
        {
            if (static_cast<int>(this->items.size())%2 != 0){
                cout << "IN!!\n";
                advance(this->middle,-1);

            }


        }


        return true;
    };
    bool pop(){
        if (this->items.empty())return false;
        
        this->items.pop_front();
        if (this->items.size() == 1){
            this->middle = this->items.begin();
            }
        else
        {
            if (static_cast<int>(this->items.size())%2 == 0){

                advance(this->middle,1);

            }


        };
        return true;

    }

    int getMiddle(){
        return *this->middle;
    };
    bool deleteMiddle(){
        if (this->items.empty())return false;
        this->items.erase(this->middle);
        const int midpoint = this->items.size()/2;
        this->middle  = this->items.begin();
        advance(this->middle,midpoint);
        return true;

    };


    void display(){
        auto temp = this->items.begin();
        while (temp != this->items.end()){
            cout << *temp << ' ';
            temp++;
        };
        cout << '\n';

    };



    ~Stack(){
        cout << "Destructor Called!\n";
        while (!this->items.empty()){
            this->items.pop_back();
        }
    }


};



int main(){
    auto ptr = make_unique<Stack>();
    char input;
    int value;
    do{
        cout << "Available Commands : \n";
        cout << "Q. Quit\n";
        cout << "A. Add item to stack\n";
        cout << "P. Pop item from stack\n";
        cout << "M. Display middle element\n";
        cout << "D. Delete middle element\n";
        cout << "O. Print out all values\n";
        cout << "Enter your command : ";
        cin >> input;
        input = tolower(input);
        switch (input){
            case 'a':{
                cout << "Add the value to add : ";
                cin >> value;
                ptr->push(value);
                break;
            }
            case 'p':{
                ptr->pop();
                break;
            }
            case 'm':{
                printf("Middle element : %i\n",ptr->getMiddle());
                break;
            }
            case 'd':{
                if (ptr->deleteMiddle()){

                    cout << "DELETED!!\n";
                }else{
                    cout << "ERROR!\n";
                }
                break;
            }
            case 'q':{
                cout << "Thank you!\n";
                break;
            };
            case 'o':{
                ptr->display();
                break;
            }


            default:{
                cout << "INVALID!\n";break;

            }


        }




    }while (input != 'q');




    return 0;
}


