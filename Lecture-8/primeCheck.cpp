#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"Not prime"<<endl;
            return false;
        }
    }
    //cout<<"Prime"<<endl;
    return true;
}
void allPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
    return;
}
int main(){
cout<<isPrime(5)<<endl;
allPrime(10);
}
