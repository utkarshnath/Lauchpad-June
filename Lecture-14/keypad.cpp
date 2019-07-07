#include<iostream>
using namespace std;
char arr[9][4] = {"ABC","DEF","GHI"};
void f(int input[],int inputIndex,int output[],int outputIndex,int n){
    if(inputIndex>=n){
        for(int i=0;i<n;i++){
            cout<<(char)output[i];
        }
        cout<<endl;
        return;
    }
    int x = input[inputIndex];
    for(int j=0;arr[x-1][j]!=0;j++){
        output[outputIndex] = arr[x-1][j];
        f(input,inputIndex+1,output,outputIndex+1,n);
    }
    return;
}
int main(){
    int input[10] = {1,2};
    int output[10];
    f(input,0,output,0,2);
}
