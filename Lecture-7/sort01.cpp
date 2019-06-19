#include<iostream>
using namespace std;
int main(){
    int arr[100] = {0,0,1,1,0,1,0};
    int n = 7;
    int start = 0;
    int end = n-1;
    while(start<end){
        while(arr[start]==0){
            start++;
        }
        while(arr[end]==1){
           end--;
        }
        if(start<end){
            //swap
            arr[start++] = 0;
            arr[end--] = 1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
