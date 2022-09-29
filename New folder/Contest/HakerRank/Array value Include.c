#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    ///Make array.
    int array[n+1];
    for(int i=0;i<n;i++)
    {
        ///Input array value.
        scanf("%d",&array[i]);
    }
    int index,update_value;
    printf("Please Enter Index value and Update Value:\n");
    scanf("%d %d",&index,&update_value);
    for(int i=n;i>index-1;i--)
    {
        array[i]=array[i-1];
    }
    array[index-1]=update_value;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}

