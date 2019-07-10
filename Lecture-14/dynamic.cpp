#include<iostream>
using namespace std;
int * f(){
    int arr[1000000];
    int n;
    cin>>n;
    int * ptr = new int[n];
    delete [] ptr;
    return ptr;
}
void f2(){
    int * ptr = new int;
    *ptr = 10;
    int x = 23;
    ptr = &x;
    cout<<x<<endl;
    return;
}
int main() {
    int * ptr1 = f();
    delete [] ptr1;

    /*
    delete ptr;
    char * ch = new char;
    new int;
    new int;
    new int;
    new int;
    *.

}
