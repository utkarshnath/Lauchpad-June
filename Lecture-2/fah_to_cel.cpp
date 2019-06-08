#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<f<<endl;
    f = 0;
    while(f<=300){
       int c = (5*(f-32))/9;
       cout<<f<<" "<<c<<endl;
       f = f + 20;
    }

}
