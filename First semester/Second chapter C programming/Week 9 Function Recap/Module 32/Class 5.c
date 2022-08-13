#include<stdio.h>
int make_sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{
    int s=make_sum();
    printf("%d\n",s);

    return 0;
}

