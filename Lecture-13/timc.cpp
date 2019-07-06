#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int start1 = start;
    int end1 = mid;
    int start2 = mid+1;
    int end2 = end;
    int k = 0;
    int temp[100000];
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
void bubbleSort(int arr[],int n){
for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[100000] = {0};
    clock_t start = clock();
    bubbleSort(arr,100000);
    clock_t end = clock();
    cout<<end-start<<endl;
}
