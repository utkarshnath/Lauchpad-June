#include<iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int>&s,stack<int>&s1){
    if(s1.empty()){
        return;
    }
    int top = s1.top();
    s1.pop();
    reverseStack(s,s1);
    s.push(top);
    return;
}
void reverseStack1(stack<int>&s,stack<int>&s1){
    int n = s.size();
    for(int i=0;i<n;i++){
        int top = s.top();
        s.pop();
        for(int j=0;j<n-i-1;j++){
            s1.push(s.top());
            s.pop();
        }
        s.push(top);
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
}
int main(){
    stack<int>s,s1;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        s1.push(s.top());
        s.pop();
    }
    reverseStack(s,s1);
     while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
