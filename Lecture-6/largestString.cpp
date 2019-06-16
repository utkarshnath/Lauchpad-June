#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    int max = 0;
    char maxArray[100];
    char arr[100];
    for(int k=0;k<n;k++){
        cin.getline(arr,100);
        cout<<arr<<endl;
        int i=0;
        while(arr[i]!=0){
            i++;
        }
        if(i>max){
            max = i;
            int j=0;
            while(arr[j]!=0){
                maxArray[j] = arr[j];
                j++;
            }
            maxArray[j] = NULL;
        }
    }
    cout<<maxArray<<endl;
}
