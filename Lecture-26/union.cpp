#include<iostream>
#include<unordered_set>
using namespace std;
void unionFunction(int arr1[],int arr2[],int n,int m){
    unordered_set<int> myset;
    for(int i=0;i<n;i++){
        myset.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        myset.insert(arr2[i]);
    }
    unordered_set<int> :: iterator it = myset.begin();
    while(it!=myset.end()){
        cout<<*it<<endl;
        it++;
    }
}
void intersectionFunction(int arr1[],int arr2[],int n,int m){
    unordered_set<int> myset;
    for(int i=0;i<n;i++){
        myset.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        if(myset.find(arr2[i])!=myset.end()){
            cout<<arr2[i]<<" ";
        }
    }
}
int main(){

}
