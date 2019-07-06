#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<&x<<endl;

    int arr[100] = {1,2,3};
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
}
