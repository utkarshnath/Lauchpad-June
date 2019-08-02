#include<iostream>
using namespace std;
int coin(int n,int arr[],int size){
    if(n==0){
        return 1;
    }
    if(n<0 || size<=0){
        return 0;
    }
    return coin(n-arr[size-1],arr,size)+
    coin(n,arr,size-1);
}
int coinDp(int n, int arr[],int size){
    int mat[100][100];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=size;j++){
            mat[i][j] = 0;
            if(i==0){
                mat[i][j] = 1;
            }
        }
    }
    mat[0][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=size;j++){
            int a = 0;
            if(i-arr[j] >=0){
                    a = mat[i-arr[j]][j];
            }
            int b = mat[i][j-1];
            mat[i][j] = a + b;
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=size;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return mat[n][size];
}
int main(){
    int arr[] = {0,1,2,3};
    cout<<coinDp(5,arr,3)<<endl;
}
