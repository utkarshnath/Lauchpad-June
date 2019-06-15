#include<iostream>
using namespace std;
int main(){
    int arr[10] = {7,4,1,3,9};
    int n = 5;
    for(int i=0;i<n;i++){
        int min = arr[i];
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< min){
                min = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = min;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
