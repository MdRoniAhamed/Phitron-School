#include<stdio.h>
//#include<string.h>

void add(int a[], int b[],int sum[],int len){

    printf("%d\n",len);
    for(int i=0;i<len;i++){
        sum[i]=a[i]+b[i];
    }
}
int main(   )
{
    int a[]={1, 2, 3};
    int b[]={2, 3, 4};
    int len=sizeof(a)/sizeof(a[0]);
    int sum[100]={0};
    add(a,b,sum,len);

    for(int i=0;i<len;i++){
        printf("%d ",sum[i]);
    }

}
