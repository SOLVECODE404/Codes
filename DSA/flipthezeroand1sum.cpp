#include<iostream>
#include<vector>
using namespace std;
int main(){
int k,l;
cin>>k>>l;
vector<vector<int>>v;
for(int i=0;i<k;i++){
    vector<int>row;
    for(int j=0;j<l;j++){
        int x;
        cin>>x;
        row.push_back(x);
    }v.push_back(row);   
}
int n=v.size();
// cout<<n<<endl;
int m=v[0].size();
// cout<<m<<endl;
for(int i=0;i<n;i++){
    if(v[i][0]==0){
    for(int j=0;j<m;j++){
        if(v[i][j]==0)v[i][j]=1;
        else v[i][j]=0;
        }
    }
}
    for(int j=0;j<m;j++){
    int noz=0;
    int noo=0;
        for(int i=0;i<n;i++){
            if(v[i][j]==0)noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<n;i++){
            if(v[i][j]==0)v[i][j]=1;
            else v[i][j]=0;
            }
        }   
    }
    cout<<"The transformation of vector is:";
    cout<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){
            cout<<v[i][j]<<" ";
            }cout<<endl;}
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=v[i][j]*x;
            x*=2;
        }
    }
    cout<<"Sum is: "<<sum<<endl;
};