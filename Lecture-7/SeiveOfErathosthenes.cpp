#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100] = {0};
    for(int i=2;i<n;i++){
        if(arr[i]==0){
            for(int j=2;i*j<=n;j++){
                arr[i*j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
        }
    }
}
