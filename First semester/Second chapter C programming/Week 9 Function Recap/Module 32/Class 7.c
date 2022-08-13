#include<stdio.h>

void check(int *a)
{
    *a=10;
}
int main()
{
    int x =100;
    check(&x);
    printf("%d",x);
    return 0;
}
