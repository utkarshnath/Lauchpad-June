#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int start1 = start;
    int end1 = mid;
    int start2 = mid+1;
    int end2 = end;
    int k = 0;
    int temp[1000];
    while(start1<=end1  && start2<=end2){
        if(arr[start1] < arr[start2]){
            temp[k++] = arr[start1++];
        }else{
            temp[k++] = arr[start2++];
        }
    }
    while(start1<=end1){
        temp[k++] = arr[start1++];
    }
    while(start2<=end2){
        temp[k++] = arr[start2++];
    }
    for(int i=0;i<k;i++){
        arr[start+i] = temp[i];
    }
}
void mergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    return;
}
int main(){
    int arr[100] = {7,5,2,5,1,3,4};
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
