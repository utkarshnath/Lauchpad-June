#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min = arr[i];
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                minIndex = j;
                min = arr[j];
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = min;
    }
    return;
}
int main(){
    int arr[10] =  {5,2,7,35,1};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
