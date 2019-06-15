#include<iostream>
using namespace std;
int ar[100000000];
int main(){
    long long int ar[1000000];
    int arr[100] = {1,2,3,4};
    //int arr[100];
    //cout<<arr[0];
    //cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[3]<<endl;
    int i;
    for(i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    for(int j=i;j<10000;j++){
        cout<<j<<" "<<arr[j]<<endl;
    }
}
