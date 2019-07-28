#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,vector<int> > mymap;
void fillmap(node * root,int value){
    if(root==NULL){
        return;
    }
    mymap[value].push_back(root->data);
    fillmap(root->left,value-1);
    fillmap(root->right,value+1);
    return;
}
void print(){
unordered_map<int,vector<int>> :: iterator it;
for(it = mymap.begin();it!=mymap.end();it++){
    int key = (*it).first;
    for(int i=0;i<(it->second).size();i++){
        cout<<(it->second)[i];
    }
}
}
int main(){
unordered_map<string,int> mymap;
mymap["ABC"] = 10;
mymap.find("ABC")
cout<<mymap["jkk"]<<endl;
}
