
/*
Given a linked list with each object having two pointers,
one for the next linked list and one containing another
linked list pointing to the bottom;
The bottom linked list is sorted,
merge all the linked lists such that one linked list
is made that contains all the elemens in sorted order

Logic : Use merge sort to merge all the linked lists
Till only one list is left;
*/
#include <iostream>

class Node{
    public:
    int data;
    Node *next;
    Node *bottom;
};

//Merge sort for returning a new LL 
//that has two LL items;
Node *merge(Node *a,Node *b){
    if (!a)return b;
    if (!b)return a;
    Node *result = NULL;
    if (a->data  > b->data){
        result = b;
        result->bottom= merge(a,b->bottom);
    }else{
        result = a;
        result->bottom = merge(a->bottom,b);
    };
    return result;
}

Node *flattenLinkedList(Node *a){
    if (!a || !a->next)return a;
    return merge(a,flattenLinkedList(a->next));
}

