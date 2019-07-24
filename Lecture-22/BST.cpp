#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;

    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
void addElement(node *& root,int data){
    if(!root){
        root = new node(data);
        return;
    }
    node * it = root;
    node * prev = NULL;
    while(it){
        prev = it;
        if(it->data > data){
            it = it->left;
        }else{
            it = it->right;
        }
    }
    if(prev->data > data){
        prev->left = new node(data);
    }else{
        prev->right = new node(data);
    }
    return;
}
void printLevelWisePrint(node * root){
    queue<node *>q1;
    queue<node *>q2;
    q1.push(root);
    while(!q1.empty() || !q2.empty()){
        while(!q1.empty()){
            node * top = q1.front();
            q1.pop();
            cout<<top->data<<" ";
            if(top->left){
                q2.push(top->left);
            }
            if(top->right){
                q2.push(top->right);
            }
        }
        cout<<endl;
         while(!q2.empty()){
            node * top = q2.front();
            q2.pop();
            cout<<top->data<<" ";
            if(top->left){
                q1.push(top->left);
            }
            if(top->right){
                q1.push(top->right);
            }
        }
        cout<<endl;
    }
}
bool search(node * root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(root->data > data){
        return search(root->left,data);
    }else{
        return search(root->right,data);
    }
}
node * deleteElement(node * root,int data){
    if(!root){
        return NULL;
    }
    if(root->data==data){
        // 0 child
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left && !root->right){
            node * temp = root->left;
            delete root;
            return temp;
        }
        if(!root->left && root->right){
            node * temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        node * it = root->left;
        node * prev = root;
        while(it->right){
            prev = it;
            it = it->right;
        }
        if(prev==root){
            it->right = root->right;
            delete root;
            return it;
        }
        prev->right = it->left;
        it->left = root->left;
        it->right = root->right;
        delete root;
        return it;
    }
    if(root->data > data){
        root->left = deleteElement(root->left,data);
    }else{
        root->right = deleteElement(root->right,data);
    }
    return root;
}
int main(){
node * root = NULL;
addElement(root,8);addElement(root,3);addElement(root,10);
addElement(root,1);addElement(root,6);addElement(root,14);
addElement(root,13);addElement(root,4);addElement(root,7);
addElement(root,2);
//root = deleteElement(root,4);
//deleteElement(root,10);
root = deleteElement(root,6);
printLevelWisePrint(root);
}








