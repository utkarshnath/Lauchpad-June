#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int curr;
    int x = 0;
    while(i<n){
        cin>>curr;
        x = x ^ curr;
        i++;
    }
    cout<<x<<endl;
}
