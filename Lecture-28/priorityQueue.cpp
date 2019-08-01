#include<iostream>
#include<queue>
using namespace std;
void kmax(){
    int arr[100] = {7,2,4,1,6,4,23,98};
    int n = 8;
    int k = 3;
    priority_queue<int,vector<int>,greater<int> > p;
    for(int i=0;i<k;i++){
        p.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(p.top()<arr[i]){
            p.pop();
            p.push(arr[i]);
        }

    }
}
int main(){
priority_queue<int> p1;  // max heap
priority_queue<int,vector<int>,greater<int> > p;  // min heap
p.push(10);
p.push(1);
p.push(23);
p.push(15);
while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
}
cout<<endl;
}
