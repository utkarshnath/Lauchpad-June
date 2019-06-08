#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1,x=1;
    while(i<=n){
        // print for ith row
        int j=1;
        while(j<=i){
            cout<<x<<" ";
            x = x+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
