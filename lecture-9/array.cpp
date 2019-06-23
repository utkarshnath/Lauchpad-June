#include<iostream>
using namespace std;
void f(int arr[200],int n){
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        arr[i] = i;
    }
    return;
}
int main(){
    int arr[100] = {1,2,3,4};
    f(arr,4);
    cout<<arr[2]<<endl;
}
