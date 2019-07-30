#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
map<string,int > mymap;
mymap["aafsaf"] = 10;
mymap["abc"] = 20;
mymap["tr"] = 30;
mymap["xuyr"] = 50;

cout<<mymap["tr"]<<endl;
map<string,int > :: iterator it = mymap.begin()+3;
for(it = mymap.begin();it!=mymap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
//mymap.erase(mymap.begin()+1,mymap.begin()+3);
//vector<vector<int> > v;
//v[0].push_back(10);

}
