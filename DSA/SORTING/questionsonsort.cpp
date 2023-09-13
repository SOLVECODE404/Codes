#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {19,12,23,8,16};
    vector<int> v(n, 0);
    int x=0;
    for (int i = 0; i < n; i++)
    {
        int minidx = -1;
        int min = INT8_MAX;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    minidx = j;
                }
            }
        }
        arr[minidx]=x;
        v[minidx]=1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}