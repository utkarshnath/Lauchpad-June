#include<iostream>
using namespace std;
void inc(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    return;
}
void dec(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
    return;
}
int main(){
dec(5);
}
