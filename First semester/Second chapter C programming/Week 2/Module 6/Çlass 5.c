///Combining for and if
#include<stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);

    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            count++;
        }

    }
    printf("\nNumber of divisors = %d\n",count);
    return 0;
}

