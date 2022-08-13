#include<stdio.h>

void change(int *ptr,int x) ///call receive pointer .
{
  *(ptr+2) = 1000;
  x=100;
}
int main()
{
    int a[3]={1,2,3};
    int k=10;
    change(a,k); ///Call pointer a pass by reference
    printf("%d\n%d %d %d\n",a,a[0],a[1],a[2]); ///print value.
    printf("%d\n",k);
    return 0;
}
