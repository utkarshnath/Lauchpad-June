#include<iostream>
using namespace std;
void f(int& x){
    x = x+1;
}
int main(){
    const char x = 65;
    x++;
    f(6);
    //x++;
    //x = x+1;
}
