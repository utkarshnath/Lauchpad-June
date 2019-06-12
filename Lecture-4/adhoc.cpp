#include<iostream>
using namespace std;
int main(){
    int count = 0;
        for(int i=0;i<20;i++){
            for(int j=5;j<15;j++){
                for(int k=j;k<i;k++){
                    count++;
                }
            }
        }
        cout<<count<<endl;
}
