#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    for(x=0;n>0;n = n/10){
        x = x*10 + n%10;
    }
    cout<<x<<endl;
}
