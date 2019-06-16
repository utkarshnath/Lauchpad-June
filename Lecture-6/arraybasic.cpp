#include<iostream>
using namespace std;
int main(){
    char arr1[4] = {'A','\0','C','D'};
    char arr[] = "ABC";
    cout<<sizeof(arr1)<<endl;
    cout<<arr1[0]<<endl;
    cout<<arr1[1]<<endl;
    cout<<arr1[2]<<endl;
    cout<<arr1<<endl;
    arr[3] = 'D';
    cout<<arr<<endl;
}
