#include<iostream>
using namespace std;
void f(){
    static int i = 10;
    i++;
    cout<<i<<endl;
    return;
}
void f1(int n){
    static int i = 5;
    if(i<=0){
        return;
    }
    cout<<i<<" "<<n<<endl;
    i--;
    f1(n);
    return;
}
int main(){
f1(5);

}
