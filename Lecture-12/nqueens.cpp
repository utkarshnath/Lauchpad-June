#include<iostream>
using namespace std;
bool isSafe(int arr[][10],int n,int x,int y){
    for(int i=x,j=y;i>=0;i--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;j<n;j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;i<n;i++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;j>=0;j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;i>=0 && j<n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;i<n && j<n;i++,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;i<n && j>=0;i++,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y;i>=0 && j>=0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    return true;
}
bool isSafe1(int arr[][10],int n,int x,int y){
    int check[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},
                        {1,-1},{0,-1},{-1,-1}};
    for(int k=0;k<8;k++){
        for(int i=x,j=y; i>=0 && i<n && j>=0 && j<n;i+=check[k][0],j+=check[k][1]){
            if(arr[i][j]==1){
                return false;
            }
        }
    }
    return true;
}
int nqueens(int arr[][10],int n,int x){
    if(x==n){
        cout<<"****************************"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"****************************"<<endl;
        return 1;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(isSafe1(arr,n,i,x)){
            arr[i][x] = 1;
            sum += nqueens(arr,n,x+1);;
            /*
            bool done = nqueens(arr,n,x+1);
            if(done){
                return true;
            }
            */
            arr[i][x] = 0;
        }
    }
    return sum;
}
int main(){
int arr[10][10];
int n = 8;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        arr[i][j] = 0;
    }
}
cout<<nqueens(arr,n,0)<<endl;;
}






