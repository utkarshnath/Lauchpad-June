#include<iostream>
using namespace std;
template <typename T>
struct node{
    T data;
    node<T> * next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
struct queue{
    node<T> * head;
    node<T> * tail;

    int cs;
    queue(){
        head = tail = NULL;
        cs = 0;
    }

    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
    void enqueue(T data){
        node<T> * temp = new node<T>(data);
        cs++;
        if(head==NULL){
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
        return;
    }
    void dequeue(){
        if(head){
            cs--;
            node<T> * temp = head;
            head = head->next;
            delete temp;
        }
        return;
    }
    T front(){
        if(head){
            return head->data;
        }
        return NULL;
    }
};
int main(){
queue<int>q;


}
