#inlcude<iostream>
using namespace std;
int multiply(int a,int b){
    if(b==0){
        return 0;
    }
    return multiply(a,b-1)+a;
}
int main(){

}
