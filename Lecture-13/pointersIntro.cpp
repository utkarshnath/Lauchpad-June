#include<iostream>
using namespace std;
int main(){
    /*
    char ch = 'A';
    int * ptr = (int * )&ch;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    */
    char arr[10] = "ABCDEFGT";
    void * cptr = (void *)&arr[0];
    cout<<cptr<<endl;
    cptr = cptr+1;
    cout<<(char*)cptr<<endl;
    /*
    int x = 10;
    int * ptr = &x;
    int** ptr2 = &ptr;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    /*
    int x = 10;
    int * ptr = &x;
    cout<<sizeof(ptr)<<endl;
    float y = 3.14;
    float * ptr1 = &y;
    cout<<sizeof(ptr1)<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    */
}
