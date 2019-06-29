#include<iostream>
using namespace std;
int stoi(char arr[]){
    if(arr[0]==0){
        return 0;
    }
    int i=0;
    while(arr[i]){
        i++;
    }
    int last = arr[i-1] - '0';
    arr[i-1] =  '\0';
    int left = stoi(arr);
    return left*10 + last;
}
int main(){
    char arr[100] = "1234";
    cout<<stoi(arr)<<endl;
}



