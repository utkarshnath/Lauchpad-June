#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node * parent;
    int childCount;
    node ** child;

    node(int data,int childCount){
        this->data = data;
        parent = NULL;
        child = new node*[childCount];
    }
};
void createTree(){
    node * root = new node(10,3);
    node * child1 = new node(1,1);
    root->child[0] = child1;
    child1->parent = root;
}








