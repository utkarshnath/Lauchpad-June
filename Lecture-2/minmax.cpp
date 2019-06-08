#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0,min = INT_MAX,max = INT_MIN;
int i=0,x;
while(i<n){
    cin>>x;
    sum = sum+x;
    if(x<min){
        min = x;
    }
    if(x>max){
        max = x
    }
    i = i+1;
}
cout<<sum/n<<" "<<min<<" "<<max<<endl;
}





