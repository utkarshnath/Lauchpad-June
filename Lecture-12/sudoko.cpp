#include<iostream>
using namespace std;
bool isSafe(int arr[][9],int x,int y,int k){
    for(int i=x,j=y;i>=0;i--){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;j<9;j++){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;i<9;i++){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;j>=0;j--){
        if(arr[i][j]==k){
            return false;
        }
    }
    int startx = (x/3)*3;
    int starty = (y/3)*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i+startx][j+starty]==k){
                return false;
            }
        }
    }
    return true;
}
bool sudoko(int arr[][9],int n,int x,int y){
    if(x==n-1 && y==n){
        cout<<"****************************"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"****************************"<<endl;
        return true;
    }
    if(y==n){
        y = 0;
        x = x+1;
    }

    if(arr[x][y]==0){
        for(int k=1;k<10;k++){
            if(isSafe(arr,x,y,k)){
                arr[x][y] = k;
                bool done = sudoko(arr,n,x,y+1);
                if(done){
                    return true;
                }
                arr[x][y] = 0;
            }
        }
    }else{
        return sudoko(arr,n,x,y+1);
    }
    return false;
}
int main(){
    int mat[9][9] = {{5,3,0,0,7,0,0,0,0},
                {6,0,0,1,9,5,0,0,0},
                {0,9,8,0,0,0,0,6,0},
                {8,0,0,0,6,0,0,0,3},
                {4,0,0,8,0,3,0,0,1},
                {7,0,0,0,2,0,0,0,6},
                {0,6,0,0,0,0,2,8,0},
                {0,0,0,4,1,9,0,0,5},
                {0,0,0,0,8,0,0,7,9}};
    cout<<sudoko(mat,9,0,0)<<endl;
}









