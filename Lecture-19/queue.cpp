#include<iostream>
using namespace std;
template <typename T>
class queue{
    T * arr;
    int front;
    int rear;
    int cs;
    int ms;

public:
    queue(int size){
        arr = new T[size];
        ms = size;
        front = 0;
        rear = size-1;
        cs = 0;
    }
    int size(){
        return cs;
    }
    bool empty(){
        return cs==0;
    }
    void enqueue(T data){
        if(cs==ms){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[(rear+1)%ms] = data;
        cs++;
        rear = (rear+1)%ms;
        return;
    }
    void dequeue(){
        if(cs!=0){
            front = (front+1)%ms;
            cs--;
        }
    }
    T top(){
        if(cs!=0){
            return arr[front];
        }
        return -1;
    }
};
int main(){
    queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.dequeue();
    }
}



