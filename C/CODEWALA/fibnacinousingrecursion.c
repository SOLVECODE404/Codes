#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int fibo(int n){
    if(n==1||n==2) return 1;
    // printf("%d ",n);
    return fibo(n-1)+fibo(n-2);

}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
}