#include<iostream>
using namespace std;
int lcs(string a,string b){
    int mat[100][100];
    int n = a.length();
    int m = b.length();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            mat[i][j] = 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                mat[i][j] = mat[i-1][j-1]+1;
            }else{
                mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return mat[n][m];
}
int main(){
    lcs("axby","xabc");
}
