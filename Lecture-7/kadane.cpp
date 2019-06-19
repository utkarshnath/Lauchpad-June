#include<iostream>
using namespace std;
int main(){
    int arr[100] = {4,-2,7,-10,-3,5};
    int n = 6;
    int max = INT_MIN;
    int curr = 0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr<0){
            curr = 0;
        }
        if(curr>max){
            max = curr;
        }
    }
    cout<<max<<endl;
}
