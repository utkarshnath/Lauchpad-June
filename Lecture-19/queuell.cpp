#include<iostream>
using namespace std;
template <typename T>
struct node{
    T data;
    node * next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};
struct queue{
    node * head;
    node * tail;
};
