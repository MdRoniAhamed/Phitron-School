#include<stdio.h>
int max(int a,int b)
{
    int c=(a>b)?a:b;
    return c;
}
int main()
{
    printf("Max value :%d",max(121,207));
}
