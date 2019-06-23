#include<iostream>
using namespace std;
// this function would magically state if array is sorted or not starting from i
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    bool right = isSorted(arr,n,i+1);
    if(right && arr[i]<=arr[i+1]){
        return true;
    }
    return false;
}
int main(){
    int arr[100] = {1,2,3,4};
    cout<<isSorted(arr,4,0)
}
