#include<stdio.h>
int take_array(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    // make_sum();
    int test;
    scanf("%d",&test);
   while(test--)
    {
        take_array();
    }

    return 0;
}
