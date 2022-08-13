#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k); ///Input 2 value.
    int value=1,count=0;
        while(value<k)   ///value double.
    {
        value *= 2;
        count++;
        if(count==n){
            break;
        }
    }
    for(int i=count; i<n; i++)  ///sum k value.
    {
        value += k;
    }
    printf("%d\n",value); ///print value.
    return 0;
}

