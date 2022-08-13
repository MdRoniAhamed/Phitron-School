#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i;i<n;i++){
        scanf("%d",&arr[i]);
        count +=arr[i];
    }
    printf("%d",count);

    return 0;
}

