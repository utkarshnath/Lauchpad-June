#include<iostream>
using namespace std;
struct book{
public:
    int x;
    long a;
    int y;
};
int main(){
    cout<<sizeof(book)<<endl;
    book b;
    b.a = 10;
}
