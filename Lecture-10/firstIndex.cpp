#include<iostream>
using namespace std;
// i->n first index
int firstIndex(int arr[],int n,int i){
    if(i==n){
        return -1;
    }
    //ith
    if(arr[i]==7){
        return i;
    }
    int index = firstIndex(arr,n,i+1);
    return index;
}

int lastIndex(int arr[],int n,int i){
        if(i==n){
            return -1
        }

        int index = lastIndex(arr,n,i+1);
        if(inedx!=-1){
            return index;
        }
        if(arr[i]==7){
            return i;
        }
        return -1;
}

int main(){
int arr[10] = {4,5,7,2,7};
lastIndex(arr,5,0);
}






