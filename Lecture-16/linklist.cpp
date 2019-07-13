#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};
node * createLinkList(){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    node * head;
    if(data!=-1){
       head = new node(data);
    }else{
        return NULL;
    }
    node * tail = head;
    cin>>data;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        tail = tail->next;
        cin>>data;
    }
    return head;
}
void createLinkList1(node *& head){
     cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
       head = new node(data);
       //head->data = data;
       //head->next = NULL;
    }else{
        return;
    }
    node * tail = head;
    cin>>data;
    while(data!=-1){
        node * temp = new node(data);
        //temp->data = data;
        //temp->next = NULL;
        tail->next = temp;
        //tail = temp;
        tail = tail->next;
        cin>>data;
    }
    return;
}
void createLinkList2(node ** head){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
        *head = new node(data);
    }
    node * tail = *head;
    cin>>data;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        tail = tail->next;
        cin>>data;
    }
    return;
}
node * insertAtHead(node * head,int data){
    node * temp = new node(data);
    temp->next = head;
    return temp;
}

void print(node * head){
    while(head){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
//node* head = createLinkList();
node * head = NULL;
createLinkList2(&head);
print(head);
head = insertAtHead(head,10);
//createLinkList1(head);
print(head);
}
