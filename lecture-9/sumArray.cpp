#include<iostream>
using namespace std;
//sum from i to n
int sumArray(int arr[],int n,int i){
    if(i==n-1){
        return arr[i];
    }
    int right = sumArray(arr,n,i+1);
    int curr = arr[i];
    return curr+right
}
