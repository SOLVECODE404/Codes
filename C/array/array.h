#include<stdio.h>
void arr(int arr1[][],int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
}