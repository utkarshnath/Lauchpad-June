#include<iostream>
using namespace std;
// i-->n present or not
bool check(int arr[],int n,int i){
    if(i==n){
        return false;
    }
    //ith
    if(arr[i]==7){
        return true;
    }
    bool right = check(arr,n,i+1);
    return right;
}
bool check1(int arr[],int n){
    if(n==0){
        return false;
    }
    if(arr[0]==7){
        return true;
    }
    bool right = check1(&arr[1],n-1);
    return right;
}
int main(){
    int arr[10] = {4,5,0,2,7};
    cout<<check(arr,5,0)<<endl;
    cout<<check1(arr,5)<<endl;
}
