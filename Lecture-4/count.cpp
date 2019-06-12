#include<iostream>
using namespace std;
int main(){

    char ch;
    /*
    char ch1;
    ch = cin.get();
    ch1 = cin.get();
    cout<<ch<<" "<<ch1<<endl;
    */

    int whiteSpaceCount = 0;
    int alphaCount = 0;
    int digitCount = 0;
    int others = 0;
    ch = cin.get();
    while(ch!='$'){
        if(ch==' ' || ch=='\t' || ch=='\n'){
            whiteSpaceCount++;
        }else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            alphaCount++;
        }else if(ch>=48 && ch<=57){
            digitCount++;
        }else{
            others++;
        }
        ch = cin.get();
    }
    cout<<whiteSpaceCount<<endl;
    cout<<alphaCount<<endl;
    cout<<digitCount<<endl;
    cout<<others<<endl;

}





