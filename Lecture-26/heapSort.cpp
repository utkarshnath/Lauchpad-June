#include<iostream>
#include<vector>
using namespace std;
void heapify(int arr[],int index,int n){
    int left = 2*index;
    int right = 2*index+1;
    int maxIndex = index;
    if(left<=n && arr[left]>arr[index]){
        maxIndex = left;
    }
    if(right<=n && arr[right]>arr[maxIndex]){
        maxIndex = right;
    }
    if(maxIndex!=index){
        swap(arr[maxIndex],arr[index]);
        heapify(arr,maxIndex,n);
    }
    return;
}
void heapSort(int arr[],int n){
    // construct heap
    for(int i=n/2;i>0;i--){
        heapify(arr,i,n);
    }

    for(int i=n;i>0;i--){
        swap(arr[1],arr[i]);
        heapify(arr,1,i-1);
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {-1,7,4,3,1,2,5,10};
    heapSort(arr,7);
}
