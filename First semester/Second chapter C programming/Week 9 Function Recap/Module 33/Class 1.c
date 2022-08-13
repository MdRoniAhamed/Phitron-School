#include<stdio.h>

int main()
{
    int a=10;

    printf("Address-> %p value-> %d\n",&a,a);
    int *p=&a;
    printf("Address-> %p value=> %p\n",&p,p);

    *p=20;
    printf("Value of that address %d",*p);

    return 0;
}
