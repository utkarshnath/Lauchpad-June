#include<iostream>
using namespace std;
int main(){
    int arr[4][5] = {{1,2,3,4,4},{5,6,7,8,5},
                    {9,10,11,12,8},{13,14,15,16,2}};

    for(int i=0;i<5;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=0;j<4;j++){
                cout<<arr[3-j][i]<<" ";
            }
        }
    }
    cout<<endl;
}
