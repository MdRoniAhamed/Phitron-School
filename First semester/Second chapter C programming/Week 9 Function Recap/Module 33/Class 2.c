#include<stdio.h>

int main()
{

    int a = 100;
    int *p = &a;
    int **q = &p;

//    printf("Value => %d Address=> %p\n",a,&a);
//    printf("Value => %p Address=> %p\n",p,&p);
//    printf("Value => %p Address=> %p\n",q,&q);
    printf("%d\n",**q);
    return 0;
}
