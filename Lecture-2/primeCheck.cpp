#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        //check whether i divides N
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return 0;
        }
        i = i+1;
    }
    cout<<"Prime"<<endl;
}
