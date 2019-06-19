#include<iostream>
using namespace std;
int main(){
    int arr[2][4] = {{1,2,3,4},{5,6,7,8}};
    cout<<arr<<endl;
    cout<<&arr[0][1]<<endl;
    cout<<&arr[0][2]<<endl;
    cout<<&arr[0][3]<<endl;
    cout<<&arr[1][0]<<endl;
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            //cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
