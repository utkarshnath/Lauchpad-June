#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int> p1; // max heap
priority_queue<int,vector<int>,greater<int> > p2; // minheap
int n;
cin>>n;
int median = n;
p1.push(n);
cin>>n;
while(n!=-1){
    if(n<median){
    // left
        if(p1.size()<= p2.size()){
            if(p1.size()==p2.size()){
                p1.push(n);
                median = p1.top();
            }else{
                p1.push(n);
                median = (p1.top()+p2.top())/2;
            }
        }else{
            p2.push(p1.top());
            p1.pop();
            p1.push(n);
            median = (p1.top()+p2.top())/2;
        }
    }else{
    // right
        if(p2.size()<= p1.size()){
            if(p1.size()==p2.size()){
                p2.push(n);
                median = p2.top();
            }else{
                p2.push(n);
                median = (p1.top()+p2.top())/2;
            }
        }else{
            p1.push(p2.top());
            p2.pop();
            p2.push(n);
            median = (p1.top()+p2.top())/2;
        }
    }
    cout<<median<<endl;
    cin>>n;
}
}
