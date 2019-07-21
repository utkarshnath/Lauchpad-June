#include<iostream>
using namespace std;
class node{
    int data;
    node * left;
    node * right;
public:
    node(int data){
        this->data = data;
        left = right = NULL;
    }
    void setData(int data){

    }
    void setLeft(node * left){
        this->left = left;
    }
    void setRight(node * right){

    }
};
int main(){

}
