#include<iostream>
using namespace std;
void swap(char& a,char& y){
    char temp = a;
    a = y;
    y = temp;
    return;
}
void permutation(char arr[],int i){
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }
    for(int j=i;arr[j]!='\0';j++){
        swap(arr[j],arr[i]);
        permutation(arr,i+1);
        swap(arr[j],arr[i]);
    }
    return;
}
int main(){
    char arr[] = "ABC";
    permutation(arr,0);
}
