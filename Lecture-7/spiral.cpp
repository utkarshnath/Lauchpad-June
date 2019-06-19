#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int n = 5,m=5;
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = count;
            count++;
        }
    }
    int a = 0;
    count = 0;
    while(true){
        for(int i=a,j=a;j<m-a;j++){
            cout<<arr[i][j]<<" ";
            count++;
            if(count==n*m){
                cout<<endl;
                return 0;
            }
        }
        for(int i=1+a,j=m-1-a;i<n-a;i++){
            cout<<arr[i][j]<<" ";
            count++;
            if(count==n*m){
                cout<<endl;
                return 0;
            }
        }
        for(int i=n-1-a,j=m-2-a;j>=a;j--){
            cout<<arr[i][j]<<" ";
            count++;
            if(count==n*m){
                cout<<endl;
                return 0;
            }
        }
        for(int i=n-2-a,j=a;i>a;i--){
            cout<<arr[i][j]<<" ";
            count++;
            if(count==n*m){
                cout<<endl;
                return 0;
            }
        }
        cout<<endl;
        a++;
    }
}










