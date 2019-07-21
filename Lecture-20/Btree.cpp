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
node * createBtree(){
    cout<<"Enter data of root and -1 if empty"<<endl;
    int data;
    cin>>data;
    node * root = NULL;
    if(data!=-1){
        root = new node(data);
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node * top = q.front();
        q.pop();
        cout<<"Enter data for left of "<<top->data<<"-1 if empty"<<endl;
        cin>>data;
        if(data!=-1){
            node * temp = new node(data);
            top->left = temp;
            q.push(temp);
        }
        cout<<"Enter data for right of "<<top->data<<"-1 if empty"<<endl;
        cin>>data;
        if(data!=-1){
            node * temp = new node(data);
            top->right = temp;
            q.push(temp);
        }
    }
    return root;
}
void preorder(node * root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void levelOrderPrint(node * root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node * top = q.front();
        cout<<top->data<<" ";
        q.pop();
        if(top->left){
            q.push(top->left);
        }
        if(top->right){
            q.push(top->right);
        }
    }
}
int count(node * root){
    if(root==NULL){
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left+right+1;
}
int maxNode(node * root){
    if(root==NULL){
        return INT_MIN;
    }
    int left = maxNode(root->left);
    int right = maxNode(root->right);
    return max(root->data,max(left,right));
}
int greaterThanX(node * root,int x){
    if(root==NULL){
        return 0;
    }
    int left = greaterThanX(root->left,x);
    int right = greaterThanX(root->right,x);
    if(root->data > x){
        return left+right+1;
    }
    return left+right;
}
int groupSum(node *root){
    if(root==NULL){
        return 0;
    }
    int sum = root->data;
    if(root->left){
        sum+=root->left->data;
    }
    if(root->right){
        sum+=root->right->data;
    }
    return sum;
}
node * maxSubGroup(node* root){
    if(root==NULL){
        return NULL;
    }
    node * left = maxSubGroup(root->left);
    node * right = maxSubGroup(root->right);
    int leftGroup = groupSum(left);
    int rightGroup = groupSum(right);
    int rootGroup = groupSum(root);
    node * max;
    int maxGroup;
    if(leftGroup>rightGroup){
        max = left;
        maxGroup = leftGroup;
    }else{
        max = right;
        maxGroup = rightGroup;
    }
    if(rootGroup > maxGroup){
        return root;
    }else{
        return max;
    }
}
pair<node *,int> max1(pair<node *,int>a, pair<node *,int>b){
    if(a.second>b.second){
        return a;
    }
    return b;
}
pair<node *,int> maxSubGroup1(node * root){
    if(root==NULL){
        pair<node *,int> p(0,0);
        return p;
    }
    pair<node *,int> left = maxSubGroup1(root->left);
    pair<node *,int> right = maxSubGroup1(root->right);
    pair<node *,int> rootpair;
    rootpair.first = root;
    rootpair.second = groupSum(root);
    return max1(rootpair,max1(left,right));
}
//8 10 3 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main(){
node * root  = createBtree();
/*
preorder(root);
cout<<endl;
postorder(root);
cout<<endl;
inorder(root);
cout<<endl;
levelOrderPrint(root);
cout<<endl;
*/
cout<<maxNode(root)<<endl;
cout<<maxSubGroup1(root).second<<endl;
}





