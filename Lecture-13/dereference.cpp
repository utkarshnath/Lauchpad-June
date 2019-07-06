#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    int z;
    cout<<z<<endl;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout<<ptr2<<endl;
    ptr1 = ptr2;
    //cout<<*ptr1<<endl;
    int * ptr3 = 0;
    cout<<ptr3<<endl;
    /*
    int x = 10;
    int *ptr = &x;
    int **ptr1 = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr1<<endl;
    cout<<*&ptr<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;
    /*
int x = 10;
int * ptr;
ptr = &x;
cout<<ptr<<endl;
cout<<*ptr<<endl;

*ptr = 5;
cout<<x<<endl;
*/
}
