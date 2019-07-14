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
void insertAtHead(node *& head,int data){
    node * temp = new node(data);
    temp->next = head;
    head = temp;
    return;
}
void insertAtHead(node ** head,int data){
    node * temp = new node(data);
    temp->next = *head;
    *head = temp;
    return;
}

void insertAtPositionK(node ** head,int k,int data){
    node * temp = new node(data);
    if(k==0){
        temp->next = *head;
        *head = temp;
        return;
    }
    node * it = *head;
    while(k>1){
        it = it->next;
        k--;
    }
    temp->next = it->next;
    it->next = temp;
}
void deleteAtPositionK(node *& head,int k){
    if(k==0){
        node * temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node * it = head;
    while(k>1){
        it = it->next;
        k--;
    }
    node * temp = it->next;
    it->next = it->next->next;
    delete temp;
    return;
}
int length(node * head){
    int i=0;
    while(head){
        head = head->next;
        i++;
    }
    return i;
}
node * midPoint(node * head){
    node * it1 = head; // 2 steps
    node * it2 = head; // 1 steps
    while(it1->next && it1->next->next){
        it1 = it1->next->next;
        it2 = it2->next;
    }
    return it2;
}
void print(node * head){
    while(head){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    return;
}
bool findElement(node * head,int data){
    if(!head){
        return false;
    }
    if(head->data==data){
        return true;
    }
    bool found = findElement(head->next,data);
    return found;
}
node * findAtPositionK(node * head,int k){
    while(k>0){
        head = head->next;
        k--;
    }
    return head;
}
void swap(node *& head,int i,int j){
    if(i==0 && j==1){
        node * a = head;
        node * b = a->next;
        node * bnext = b->next;
        head = b;
        b->next = a;
        a->next = bnext;
        return;
    }
    if(i==0){
        node * bprev = findAtPositionK(head,j-1);
        node * a = head;
        node * b = bprev->next;
        node * bnext = b->next;
        head = b;
        b->next = a->next;
        bprev->next = a;
        a->next = bnext;
        return;
    }
    if(j-i==1){
        node * aprev = findAtPositionK(head,i-1);
        node * a = aprev->next;
        node * b = a->next;
        node * bnext = b->next;
        aprev->next = b;
        b->next = a;
        a->next = bnext;
        return;
    }
    node * aprev = findAtPositionK(head,i-1);
    node * bprev = findAtPositionK(head,j-1);
    node * a = aprev->next;
    node * b = bprev->next;
    node * bnext = b->next;
    aprev->next = b;
    b->next = a->next;
    bprev->next = a;
    a->next = bnext;
}
void bubbleSort(node *& head){
    int n =length(head);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            node * a = findAtPositionK(head,j);
            node * b = a->next;
            if(a->data > b->data){
                swap(head,j,j+1);
            }
        }
    }
}
int main(){
//node* head = createLinkList();
node * head = NULL;
createLinkList2(&head);
print(head);
bubbleSort(head);
print(head);
/*
//insertAtPositionK(&head,2,10);
//insertAtPositionK(&head,0,11);
//createLinkList1(head);
print(head);
//deleteAtPositionK(head,0);
//deleteAtPositionK(head,2);
print(head);
cout<<     ((*midPoint(head)).data)  <<endl;

*/
}
