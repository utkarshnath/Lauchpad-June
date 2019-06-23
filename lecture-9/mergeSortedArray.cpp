#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m){
    int arr3[100];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
            //i++;
            //k++;
        }else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[10] = {1,3,7,10,15};
    int arr2[10] = {2,5,6,8};
    merge(arr1,arr2,5,4);
    cout<<endl;
}
