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
};
template <typename T>
class HashTable{
    node<T>** table;
    int tableSize;
    int hashFunction(string key){
        int power = 1;
        int curr = 0;
        for(int i=0;i<key.size();i++){
            power = (power*37)%tableSize;
            curr+= (key[i]*power);
        }
        return curr%tableSize;
    }
public:
    HashTable(int size){
        table = new node<T>*[size];
        for(int i=0;i<size;i++){
            table[i] = NULL;
        }
        tableSize = size;
    }

    void insert(string key,T value){
        node<T> * temp = new node<T>(key,value);
        int index = hashFunction(key);
        temp->next = table[index];
        table[index] = temp;
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
HashTable<int> h(70);
h.insert("ancd",10);
h.insert("wehkfewk",20);
h.insert("ankwefkjcd",30);
h.insert("oqwoiq",40);
h.insert("qhwbdq",50);
h.print();
cout<<h.search("ankwefkjcd")<<endl;
h.remove("qhwbdq",50);
cout<<endl;
h.print();
}






