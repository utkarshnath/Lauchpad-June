#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class stack{
    // data member
    vector<T> v;
public:
    // functions
    bool isEmpty(){
        return v.size()==0;
    }

    int size(){
        return v.size();
    }

    void push(T data){
        v.push_back(data);
    }
    void pop(){
        if(!isEmpty()){
            v.pop_back();
        }
        return;
    }

    T top(){
        if(!isEmpty()){
            return v[size()-1];
        }
        return -1;
    }
};
int main(){
stack s;
s.push('A');
s.push('B');
s.push('C');
s.push('D');
//s.v[1] = 78;
while(!s.isEmpty()){
    cout<<s.top()<<endl;;
    s.pop();
}

}
