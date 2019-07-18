#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node * prev;

    node(int data){
        this->data = data;
        next = prev = NULL;
    }
};
node * createll(){
    cout<<"enter data and -1 to exit";
    int data;
    cin>>data;
    node * head;
    if(data!=-1){
        head = new node(data);
        cin>>data;
    }
    node * tail = head;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
        cin>>data;
    }
    return head;
}
int main(){
cout<<sizeof(node)<<endl;
}
