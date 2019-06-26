#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return power(x,n-1)*x;
}
int main(){

}
