#include<iostream>
using namespace std;
bool search(int arr[],int start,int end,int k){
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==k){
            return true;
        }
        if(arr[mid]>k){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return false;
}
int main(){
int arr[10] = {1,10,13,15,18,21,34};
cout<<search(arr,0,6,105)<<endl;
}
