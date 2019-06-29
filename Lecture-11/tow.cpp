#include<iostream>
using namespace std;
void tow(int n,char source,char dest,char helper){
    if(n==1){
        cout<<source<<"-->"<<dest<<endl;
        return;
    }
    tow(n-1,source,helper,dest);
    tow(1,source,dest,helper);
    //cout<<source<<"-->"<<dest<<endl;
    tow(n-1,helper,dest,source);
    return;
}
int main(){
tow(4,'A','C','B');
}
