#include<iostream>
using namespace std;
class complex{
    int real;
    int img;

public:

    complex(int real,int img){
        this->real = real;
        this->img = img;
    }
    void setReal(int real){
        this->real = real;
    }
    void setImg(int img){
        cout<<getImg()<<endl;
        this->img = img;
    }
    int getReal(){
        return real;
    }
    int getImg(){
        return img;
    }
    complex operator~(){
        complex temp(real,-1*img);
        return temp;
    }
    complex operator+(complex c){
        complex temp(real,img);
        temp.real += c.real;
        temp.img += c.img;
        return temp;
    }
    void print(){
        cout<<real<<" + i "<<img<<endl;
        return;
    }
};

int main(){
complex c(3,4);
c.setImg(5);
 complex c1 = ~c;
// ~c;
 (~c).print();
(c + (~c)).print();
}

