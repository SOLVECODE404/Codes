// sorting the array according to index of smallest element towards the greatest element ..........

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n] = {19,12,23,8,16};
//     vector<int> v(n, 0);
//     int x=0;
//     for (int i = 0; i < n; i++)
//     {
//         int minidx = -1;
//         int min = INT8_MAX;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == 1)
//                 continue;
//             else
//             {
//                 if (min > arr[j])
//                 {
//                     min = arr[j];
//                     minidx = j;
//                 }
//             }
//         }
//         arr[minidx]=x;
//         v[minidx]=1;
//         x++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// finding the range between which the array is in sorted order
// which subtracting with an integer k so that it becomes sorted...


#include<bits/stdc++.h>
using namespace std;
float max(float a,float b){
    if(a>=b)return a;
    else return b;
}
float min(float a,float b){
    if(a<b)return a;
    else return b;
}
int main(){
    int arr[]={5,3,10};
    int n=4;
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    float kmin=(float)(INT8_MIN);
    float kmax=(float)(INT8_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i]+arr[i+1]/2.0));
        }
        else{
            kmax=min(kmax,(arr[i]+arr[i+1]/2.0));
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false)cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"There is only one value of k:"<<kmin;
        }
        else  cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }cout<<"Range of k is: ["<<kmin<<","<<(int)kmax<<"]"<<endl;
    }
}
