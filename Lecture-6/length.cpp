#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    cout<<i<<endl;
    int start = 0;
    int end = i-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            cout<<"NOT"<<endl;
            return 0;
        }
        start++;
        end--;
    }
    cout<<"YES"<<endl;
}
