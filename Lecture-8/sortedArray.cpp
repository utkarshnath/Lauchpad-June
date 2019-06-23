#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int n = 4;
    int m = 4;
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>k;
    int i=0,j=m-1;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==k){
            cout<<"Found"<<endl;
            return 0;
        }
        if(arr[i][j]>k){
            j--;
        }else{
            i++;
        }
    }
    cout<<"Not found"<<endl;
}
