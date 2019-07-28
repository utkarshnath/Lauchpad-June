#include<iostream>
#include<string>
using namespace std;
template <typename T>
struct node{
    string key;
    T value;
    node * next;
    node(string key,T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};
template <typename T>
class HashTable{
    node<T>** table;
    int tableSize;
    int currSize;
    int hashFunction(string key){
        int power = 1;
        int curr = 0;
        for(int i=0;i<key.size();i++){
            power = (power*37)%tableSize;
            curr+= (key[i]*power)%tableSize;
        }
        return curr%tableSize;
    }
    void rehash(){
        node<T>** oldTable = table;
        int oldTableSize = tableSize;
        table = new node<T>*[2*tableSize];
        tableSize = 2*tableSize;
        currSize = 0;
        for(int i=0;i<tableSize;i++){
            table[i] = NULL;
        }
        for(int i=0;i<oldTableSize;i++){
            node<T>* head = oldTable[i];
            while(head){
                insert(head->key,head->value);
                head = head->next;
            }
            delete oldTable[i];
        }
        delete [] oldTable;
    }
public:
    HashTable(int size){
        table = new node<T>*[size];
        for(int i=0;i<size;i++){
            table[i] = NULL;
        }
        tableSize = size;
        currSize = 0;
    }

    void insert(string key,T value){
        node<T> * temp = new node<T>(key,value);
        int index = hashFunction(key);
        temp->next = table[index];
        table[index] = temp;
        currSize++;
        float lf = currSize/(tableSize*1.0);
        //cout<<lf<<endl;
        if(lf>0.7){
            rehash();
        }
    }

    T search(string key){
        int index = hashFunction(key);
        node<T> * head = table[index];
        while(head){
            if(key.compare(head->key)==0){
                return head->value;
            }
            head = head->next;
        }
        return NULL;
    }

    void remove(string key,T value){
        int index = hashFunction(key);
        node<T>*  head = table[index];
        node<T>* prev = NULL;
        while(head){
            if(key.compare(head->key)==0 && head->value==value){
                currSize--;
                if(!prev){
                    table[index] = head->next;
                    delete head;
                    return;
                }
                prev->next = head->next;
                delete head;
                return;
            }
            prev = head;
            head = head->next;
        }
    }
    void print(){
        for(int i=0;i<tableSize;i++){
            cout<<i<<"::";
            node<T>* head = table[i];
            while(head){
                cout<<"("<< head->key<<","<<head->value<<")";
                cout<<"-->";
                head = head->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
HashTable<int> h(7);
h.insert("abc",13);
h.insert("behrhgjer",10);
h.insert("dvqw",11);
h.insert("iwue",113);
h.print();
cout<<endl;
h.insert("ioe",113);
h.print();
cout<<endl;


}






