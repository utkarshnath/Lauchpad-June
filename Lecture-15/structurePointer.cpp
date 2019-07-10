#include<iostream>
using namespace std;
struct location{
    char street[100];
    int pincode;

    location(char street[],int pincode){
        this->pincode = pincode;
        (*this).pincode = pincode;
        int i;
        for(i=0;street[i];i++){
            this->street[i] = street[i];
        }
        this->street[i] = 0;
    }
};
struct student{
    char gender;
    char name[100];
    int age;
    location* studentLocation;
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
int main(){
location location1("abc",101010);
student s(10,'M',"bfkewbfk");
s.studentLocation = &location1;

cout<<s.age<<endl;
cout<<  (*(s.studentLocation)).street <<endl;
cout<<  (s.studentLocation)->street <<endl;
cout<<  (*(s.studentLocation)).pincode <<endl;
cout<<  (s.studentLocation)->pincode <<endl;
}
