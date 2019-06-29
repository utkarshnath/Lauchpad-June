#include<iostream>
using namespace std;
bool binarySearch(int arr[],int start,int end,int k){
    if(start>end){
        return false;
    }
    int mid = (start+end)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binarySearch(arr,start,mid-1,k);
    }else{
        return binarySearch(arr,mid+1,end,k);
    }
}
int main(){
int arr[100] = {1,2,3,4,5,6,7};
cout<<binarySearch(arr,0,6,2)<<endl;
cout<<binarySearch(arr,0,6,29)<<endl;
}
