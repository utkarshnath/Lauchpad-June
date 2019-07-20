#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(char arr[]){
    stack<char>s;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='{' || arr[i]=='[' || arr[i]=='('){
                s.push(arr[i]);
           }else{
                if((arr[i]==')' && s.top()=='(') ||(arr[i]=='}' && s.top()=='{') ||(arr[i]==']' && s.top()=='[')){
                    s.pop();
                }else{
                    return false;
                }
           }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main(){
    char arr[100] = "{()[][])";
    cout<<isBalanced(arr)<<endl;
}
