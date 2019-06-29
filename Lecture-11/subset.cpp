#include<iostream>
using namespace std;
void f(int input[],int inputIndex,int output[],int outputIndex,int n){
    if(inputIndex==n){
        for(int i=0;i<n;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    output[outputIndex] = input[inputIndex];
    f(input,inputIndex+1,output,outputIndex+1,n);
    f(input,inputIndex+1,output,outputIndex,n);
    return;
}
int main(){
int input[10] = {1,2,3};
int output[10];
f(input,0,output,0,3);
}
