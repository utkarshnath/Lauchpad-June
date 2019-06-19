#include<iostream>
using namespace std;
int main(){
    char arr[100];
    int k;
    cin>>k;
    cin.get();
    cin.getline(arr,100);

    int n = strlen(arr);
    for(int i=n-1;i>=0;i--){
        arr[i+k] = arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i] = arr[i+n];
    }
    arr[n] = 0;
    cout<<arr<<endl;
}
