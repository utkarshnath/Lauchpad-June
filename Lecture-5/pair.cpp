#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //cout<<arr[i]<<" "<<arr[j]<<endl;
            for(int k = i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
