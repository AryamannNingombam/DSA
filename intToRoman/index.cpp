#include <iostream>
#include <deque>
using namespace std;
using deq = deque<int>;

ostream &operator<<(ostream &os,const deq &v){
    for (int i : v){
        os << i << ' ';
    };
    return os;
};

/*
I : 1;
V : 5;
X : 10;
L : 50;
C : 100;
D : 500;
M : 1000;

*/
const string thousands[10]{"","M","MM","MMM"};
const string hundreds[10]{"","C","CC","CCC","CD",
"D","DC","DCC","DCCC","CM"};
const string tens[10]{"","X","XX","XXX",
"XL","L","LX","LXX","LXXX","XC"};
const string ones[10]{
"","I","II","III","IV","V","VI","VII","VIII","IX"
};

deq returnOnes(int n){
    deq result;
    int toMultiply{1};
    while (n != 0){
        result.push_front((n%10)*toMultiply);
        n /=10;
        toMultiply *= 10;
    };
    return result;
};


int main(){
    int num{};
    cout << "Enter the number : ";
    cin >> num;
    deq result = returnOnes(num);
    int size{static_cast<int>(result.size())};
    string finalAnswer{};
    switch (size){
        case 4:
        {
            finalAnswer += thousands[result[0]/1000];
            result.pop_front();
        }
        case 3:
        {
            finalAnswer += hundreds[result[0]/100];
            result.pop_front();

        }
        case 2:
        {
            finalAnswer += tens[result[0]/10];
            result.pop_front();


        }
        case 1:
        {
            finalAnswer += ones[result[0]];
            result.pop_front();

        };


    };
    
    cout << num << " in roman numerals " << finalAnswer << endl;



    return 0;
};