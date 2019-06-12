#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    // ith row
    for(int j=0;j<n-i;j++){
        cout<<(char)('A'+j);
    }
    for(int j=n-i-1;j>=0;j--){
        cout<<(char)('A'+j);
    }
    cout<<endl;
}
}
