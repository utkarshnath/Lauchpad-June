#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int>v;

    void heapify(int index){
        int left = 2*index;
        int right = 2*index+1;
        int minIndex = index;
        if(left < v.size() && v[index]>v[left]){
            minIndex = left;
        }
        if(right < v.size() && v[minIndex]>v[right]){
            minIndex = right;
        }
        if(minIndex!=index){
            swap(v[minIndex],v[index]);
            heapify(minIndex);
        }
        return;
    }

public:
    Heap(){
        v.push_back(-1);
    }
    int size(){
        return v.size()-1;
    }
    bool empty(){
        return v.size()==1;
    }
    void addElement(int data){
        v.push_back(data);
        int index = v.size()-1;
        while(index>1 && v[index] < v[index/2]){
            int temp = v[index];
            v[index] = v[index/2];
            v[index/2] = temp;
            index = index/2;
        }
    }

    int min(){
        return v[1];
    }

    int extractMin(){
        int min = -1;
        if(!empty()){
            min = v[1];
            v[1] = v[v.size()-1];
            v.pop_back();
            heapify(1);
        }
        return min;
    }

    void print(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Heap h;
    h.addElement(17);h.addElement(25);h.addElement(2);
    h.addElement(1);h.addElement(36);h.addElement(100);
    h.print();
    cout<<h.extractMin()<<endl;
    cout<<h.extractMin()<<endl;
    h.print();
}





