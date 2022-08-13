#include<stdio.h>

void print(int *a,int *b)
{
    *a=50,*b=60;
    int sum=*a+*b;
    printf("Sum = > %d\n",sum);
}
int main()
{
    int a=20,b=10;
    print(&a,&b);
    printf("%d %d\n",&a,&b);
    printf("%d %d",a,b);
    return 0;
}
