#include<stdio.h>

int main()
{
    int n;///array size;
    scanf("%d",&n);
    int array[n];///create array .
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Input Index remove:\n");
    int index;
    scanf("%d",&index);
    for(int i=index-1;i<n;i++)
    {
        array[i] = array[i+1];
    }

    for(int i=0;i<n-1;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}

