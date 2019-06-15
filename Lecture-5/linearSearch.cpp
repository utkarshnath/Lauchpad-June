#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Found"<<endl;
            return 0;
        }
    }
    cout<<" Not Found"<<endl;
}
