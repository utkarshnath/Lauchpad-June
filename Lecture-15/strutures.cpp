#include<iostream>
using namespace std;
struct student{
    char name[100];
    int age;
    char gender;
};
int main(){
    /*
    student s;
    s.age = 10;
    s.gender = 'M';
    cin.getline(s.name,100);
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.gender<<endl;
    */
    student arr[10];
    for(int i=0;i<3;i++){
        cin.getline(arr[i].name,100);
        arr[i].age = i;
        arr[i].gender = 'F';
    }
    for(int i=0;i<3;i++){
        cout<<arr[i].name<<endl;
        cout<<arr[i].age<<endl;
        cout<<arr[i].gender<<endl;
    }
    cout<<endl;
}
