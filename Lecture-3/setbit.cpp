#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<32;i++){
            count += ((n>>i) & 1);
        }
        cout<<count<<endl;
}
