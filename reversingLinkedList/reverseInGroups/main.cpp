#include <iostream>

using namespace std;


class Node {
    public :
    Node *next;
    int data;
    
    Node (int k,Node *n):data{k},next{n}{};
    Node () : data{0},next{nullptr}{};

};


Node *returnReverse(Node *head,int k){
    Node *previous = nullptr;
    Node *current = head;
    Node *next = nullptr;
    int counter = 0;
    while (current && counter < k){
        counter++;
        next = current->next;
        current->next = previous;
        previous = current;
        current =next;
    };

    if (next){
        head->next= returnReverse(next,k);
    };
    return previous;



}