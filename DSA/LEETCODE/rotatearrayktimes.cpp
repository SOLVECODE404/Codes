#include<iostream>
#include<vector>
using namespace std;

void rotatek(int i,int j,vector<int>&v){
    for(i,j;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
int n,k;
cin>>n>>k;
vector<int>v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);}
int a=v.size();
if(k>n)k=k%n;
rotatek(0,(a-k-1),v);
rotatek(a-k,a-1,v);
rotatek(0,a-1,v);
}