#include<iostream>
using namespace std;
int main(){
char arr1[100];
char arr2[100];
cin.getline(arr1,100);
cin.getline(arr2,100);
int i=0;
while(arr1[i]!=0){
    i++;
}
int j=0;
while(arr2[j]!=0){
    arr1[i] = arr2[j];
    i++;
    j++;
}
arr1[i] = 0;
cout<<arr1<<endl;
}
