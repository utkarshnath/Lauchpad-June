#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(80);
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
    }
    for(int i=0;i<4;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    it = v.begin();
    v.erase(it+2);
    cout<<v.size()<<endl;
    cout<<endl;
}
