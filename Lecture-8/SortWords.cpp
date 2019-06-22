#include<iostream>
using namespace std;
int main(){
    char arr[10][100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(arr[i],100);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int k=0;
            while(arr[j][k]==arr[j+1][k] && arr[j][k]!=0){
                k++;
            }
            if(arr[j][k]>arr[j+1][k]){
                //swap
                char temp[100];
                k=0;
                while(arr[j][k]!=0){
                    temp[k] = arr[j][k];
                    k++;n
                }
                temp[k] = 0;

                k=0;
                while(arr[j+1][k]!=0){
                    arr[j][k] = arr[j+1][k];
                    k++;
                }
                arr[j][k] = 0;

                 k=0;
                while(temp[k]!=0){
                    arr[j+1][k] = temp[k];
                    k++;
                }
                arr[j+1][k] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
