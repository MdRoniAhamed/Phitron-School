#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count=0;
    int m;
    scanf("%d", &m);
    for(int i=1; i<=m; i++)
    {
        int r;
        scanf("%d",&r);
        if(n==r)
        {
            count++;
        }
    }
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int r;
        scanf("%d",&r);
        if(r==n)
        {
          //  printf(" %d\n",n);
            count++;
        }
    }
    if(count>0)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
