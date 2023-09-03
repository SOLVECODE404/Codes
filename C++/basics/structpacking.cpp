#include<iostream>
using namespace std;
#pragma pack(1)

struct abc{
    char a;
    char b;
    int c;
};
int main(){
    struct abc a;
    cout<<sizeof(a)<<endl;
}     