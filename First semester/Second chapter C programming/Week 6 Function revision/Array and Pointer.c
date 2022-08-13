#include<stdio.h>

int f(int *a,int n)
{
    int sz=sizeof(a)/sizeof(a[0]);
    printf("%d\n",sz);
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    int sz=sizeof(a)/sizeof(a[0]);
    printf("%d\n",sz);
    f(a,sz);
}
