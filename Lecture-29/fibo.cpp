#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int arr[100] = {0,1};
int fibo1(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int a,b;
    if(arr[n-1]!=0){
        a = arr[n-1];
    }else{
        a = fibo1(n-1);
        arr[n-1] = a;
    }

    if(arr[n-2]!=0){
        b = arr[n-2];
    }else{
        b = fibo1(n-2);
        arr[n-2] = b;
    }
    return a+b;
}
int fiboDp(int n){
    int arr[100] = {0,1};
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main(){
cout<<fibo1(5)<<endl;
}
