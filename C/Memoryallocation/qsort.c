#include<stdio.h>
#include<stdlib.h>

int compare(const void*m,const void*l){
    int x=*(int*)m;
    int y=*(int*)l;
    return x-y;
}

int main(){
    int a[]={9,3,1,4,15,7,8,0};
    int length=8;
    qsort(a,length,sizeof(int),compare);
    for(int i=0;i<length;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");
}   