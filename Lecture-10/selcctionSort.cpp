#include<iostream>
using namespace std;
void selectionSort(int arr[],int n,int i){
    if(i==n-1){
        return;
    }
    int min = arr[i];
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<min){
            minIndex = j;
            min = arr[j];
        }
    }
    arr[minIndex] = arr[i];
    arr[i] = min;
    selectionSort(arr,n,i+1);
    return;
}

int main(){
int arr[10] = {7,3,5,1,2};
selectionSort(arr,5,0);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
