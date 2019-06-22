#include<iostream>
using namespace std;
void ftoc(int start,int end,int step){
    for(int f=start;f<=end;f+=step){
        int c = 5*(f-32)/9;
        cout<<f<<" "<<c<<endl;
    }
    return;
}
int main(){
    ftoc(100,300,10);
    cout<<endl;
    ftoc(0,500,100);
}
