#include<stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    int sum=0;
    int i=1;
    while(i<=number){
        printf("%d ",i);
         sum+=i;
         i++;
    }
    printf("\n%d",sum);
    return 0;
}

