#include<stdio.h>

int main()
{
    int i=1;
    int n;
    int sum=0;
    for(i=1;i<=10;i++){
        printf("Enter the %d th number.",i);
        scanf("%d",&n);
        sum+=n;

    }
    printf("%d",sum);
    return 0;
}

