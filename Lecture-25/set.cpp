#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<string> myset;
//unordered_set<string> myset;
myset.insert("ukwilgnre");
myset.insert("erlgnrkj");
myset.insert("ej");
myset.insert("qojoqwf");
myset.clear();
myset.erase(myset.begin(),myset.begin()+2);
unordered_set<string> :: iterator it;
for(it = myset.begin();it!=myset.end();it++){
    cout<<*it<<endl;
}


/*
unordered_set<int> :: iterator it = myset.find(340);
if(it!=myset.end()){
    cout<<"Found"<<endl;
    return 0;
}
cout<<"Not found"<<endl;
*/
}
