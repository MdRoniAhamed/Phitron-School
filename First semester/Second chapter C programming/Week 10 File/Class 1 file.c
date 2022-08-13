#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=0;i<a;i++)
    {
        int b;
        scanf("%d",&b);
        sum+=b;
    }
    printf("%d\n",sum);

    return 0;
}

