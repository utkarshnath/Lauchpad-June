#include<iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    cout<<ncr(5,2)<<endl;
}
