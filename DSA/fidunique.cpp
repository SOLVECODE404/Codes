#include<iostream>
using namespace std;

int uniquearr(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[12];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    uniquearr(arr,n);
}