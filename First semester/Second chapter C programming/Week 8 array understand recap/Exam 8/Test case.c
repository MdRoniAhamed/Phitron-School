#include<stdio.h>
int main()
{
    int arr;
    scanf("%d",&arr);
    int n[arr];

    for (int i=0;i<arr; i++)
    {
        scanf("%d",&n[i]);
    }

    for (int i=arr-1; i>=0; i--)
    {
        printf("%d ",n[i]);
    }

    return 0;
}
