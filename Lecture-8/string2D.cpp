#include<iostream>
using namespace std;
int main(){
    //char arr[10][100] = {"ABC","xyz","ferfre"};
    //char arr1[100] = "fgerg";
    //cout<<arr[0]<<endl;
    //cout<<arr[1]<<endl;
    char arr[10][100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(arr[i],100);
    }
    char word[100];
    cin.getline(word,100);
    for(int i=0;i<n;i++){
        //ith
        int j=0;
        bool check = true;
        while(arr[i][j]!=0 && word[j]!=0){
            if(arr[i][j]!=word[j]){
                check = false;
                break;
            }
            j++;
        }
        if(check && arr[i][j]==0 && word[j]==0){
            cout<<"Found"<<endl;
            return 0;
        }
    }
    cout<<"NOT"<<endl;
}



