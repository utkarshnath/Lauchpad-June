#include<iostream>
using namespace std;
struct book{
public:
    long a;
    int x;
    char arr[67];
};
int main(){
    cout<<sizeof(book)<<endl;
    book b;
    b.a = 10;
}
