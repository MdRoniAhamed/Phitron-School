#include<stdio.h>
int main()
{
    int a=20;
    int *b=&a; ///Pointer .
    *b=9;  ///Pointer value change.
    printf("Address=> %p value => %d\n",&a,a);
    printf("Address=> %p value => %d\n",b,*b);
    return 0;
}
