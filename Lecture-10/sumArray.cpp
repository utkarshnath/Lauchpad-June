#include<iostream>
using namespace std;
// magically returns sum starting from i
int sum(int arr[],int n,int i){
    if(i==n-1){
        return arr[i];
    }
    int right = sum(arr,n,i+1);
    int curr = arr[i];
    return right+curr;
}
// // magically returns sum starting from 0 to i
int sum1(int arr,int n){
    if(n==0){
        return arr[n];
    }
    int left = sum1(arr,n-1);
    int curr = arr[n];
    return left+curr;
}


// magically returns sorted or not starting from i
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    //ith
    bool right = isSorted(arr,n,i+1);
    if(right && arr[i]<=arr[i+1]){
        return true;
    }
    return false;
}
int main(){

}





