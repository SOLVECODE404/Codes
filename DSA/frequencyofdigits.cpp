#include<iostream>
#include<vector>
using namespace std;
void frequency(int arr[],int n){
    vector<bool>visited(n,false);
    for (int i = 0; i < n; i++)
    {
        if(visited[i]==true)
            continue;
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
                visited[j]=true;
            }
        }
        cout<<arr[i]<<" "<<count<<endl; 
        }
}
int main(){
    int arr[]={10,10,10,2,2,3,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
    
}
