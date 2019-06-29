#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    if(n==0){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            //swap
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    bubbleSort(arr,n-1);
    return;
}
void bubbleSort1(int arr[],int n,int i){
    if(n==0){
        return;
    }
    if(i==n-1){
        bubbleSort1(arr,n-1,0);
        return;
    }
    if(arr[i]>arr[i+1]){
        //swap
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    bubbleSort1(arr,n,i+1);
    return;
}
int main(){
int arr[100] = {7,3,5,1,2};
bubbleSort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
