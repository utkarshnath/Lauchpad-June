#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    float i=0;
    while(i*i<=n){
        cout<<i<<endl;
        i = i+0.01;
    }
    cout<<i-0.01<<endl;
    */
    int i=0;
    float inc = 1;
    float j = 0;
    while(i<3){
        while(j*j<n){
            j = j+inc;
            cout<<j<<endl;
        }
        j = j-inc;
        inc = inc/10;
        i = i+1;
    }
    cout<<j<<endl;
}











