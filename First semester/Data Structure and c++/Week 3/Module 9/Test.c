#include<stdio.h>
void ultra_sum(int *x,int *y)
{
    int a=*x;
    int b=*y;
    *x +=*y;
    *y *=a;

}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    ultra_sum(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
