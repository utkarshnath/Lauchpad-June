#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int wordCount = 0;
    int lineCount = 0;
    int count = 0;
    int currWordLen = 0;
    while(ch!='$'){
        count++;
        if(ch==' '  || ch=='\t'){
            if(currWordLen>0){
                wordCount++;
                currWordLen = 0;
            }
        }else if(ch=='\n'){
            lineCount++;
            if(currWordLen>0){
                wordCount++;
                currWordLen = 0;
            }
        }else{
            currWordLen++;
        }
        ch = cin.get();
    }
    lineCount++;
    if(currWordLen>0){
        wordCount++;
    }
    cout<<lineCount<<endl;
    cout<<wordCount<<endl;
    cout<<count<<endl;
}
