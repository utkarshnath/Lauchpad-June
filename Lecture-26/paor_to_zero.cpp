#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void findPair(){
    int arr[] = {3,3,-3,-3};
    unordered_map<int,int>mymap;
    for(int i=0;i<4;i++){
        if(mymap.find(arr[i]*-1)!=mymap.end()){
            cout<<arr[i]<<" "<<-1*arr[i]<<endl;
            mymap[arr[i]*-1]--;
            if(mymap[arr[i]*-1]==0){
                mymap.erase(arr[i]*-1);
            }
        }else{
            mymap[arr[i]]++;
        }
    }
}
int main(){
    int arr[100] = {5,-1,4,1,-5};
    unordered_set<int> myset;
    for(int i=0;i<5;i++){
        if(myset.find(arr[i]*-1)!=myset.end()){
            cout<<arr[i]<<" "<<-1*arr[i]<<endl;
            myset.erase(arr[i]*-1);
        }else{
            myset.insert(arr[i]);
        }
    }
}
