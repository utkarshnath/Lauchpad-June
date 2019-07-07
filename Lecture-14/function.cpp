#include<iostream>
using namespace std;
void swap(int *x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int * f(int * x){
    *x = 20;
    int y = 20;
    return &y;
}
void f1(int * x){
    int y = 70;
    int *ptr = &y;
    x = ptr;
    return;
}
void f2(int * x){
    cout<<&x<<endl;
}
int main(){
    int x = 10;
    //int * z = f(&x);
    int * ptr = &x;
    f2(ptr);
    cout<<&ptr<<endl;

}
