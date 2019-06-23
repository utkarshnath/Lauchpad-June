#include<iostream>
using namespace std;
int inc(int n){
    n++;
    cout<<&n<<endl;
    return n;
}
void f(int &n){
    n++;
    cout<<&n<<endl;
    return;
}
int main(){
    int n = 10;
    //cout<<&n<<endl;
    //n = inc(n);
    cout<<&n<<endl;
    f(n);
    cout<<n<<endl;
}
