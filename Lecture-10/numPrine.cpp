#include<iostream>
using namespace std;
void print(int n){
    switch(n){
    case 0:
        cout<<"ZERO ";
        break;
    case 1:
        cout<<"ONE ";
        break;
    case 2:
        cout<<"TWO ";
        break;
    case 3:
        cout<<"THREE ";
        break;
    case 4:
        cout<<"FOUR ";
        break;
    case 5:
        cout<<"FIVE ";
        break;
    default:
        cout<<"NONE ";
        break;
    }
    return;
}
void printNum(int n){
    if(n/10==0){
        print(n);
        return;
    }
    printNum(n/10);
    print(n%10);
    return;
}
int main(){
printNum(142);
cout<<endl;
printNum(203);

cout<<endl;
}
