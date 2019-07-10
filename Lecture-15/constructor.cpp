#include<iostream>
using namespace std;
struct student{
    char gender;
    char name[100];
    int age;
    student(){
        cout<<"default constructor"<<endl;
    }

    student(int age){
        cout<<"constructor 1"<<endl;
        this->age = age;
    }

    student(int age1,char gen){
        cout<<"constructor 2"<<endl;
        age = age1;
        gender = gen;
    }

    student(int age1,char gen,char arr[]){
        cout<<"constructor 3"<<endl;
        age = age1;
        gender = gen;
        int i;
        for(i=0;arr[i];i++){
            name[i] = arr[i];
        }
        name[i] = 0;
    }

    ~student(){
        cout<<"I am distructor"<<endl;
    }

};
void print(student s){
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.gender<<endl;
    cout<<endl;
}
int main(){
    student s(20);
    print(s);
    student s1;
    print(s1);
    student s2(10,'M');
    print(s2);
    student s3(30,'M',"fwrgr");
    print(s3);
}
