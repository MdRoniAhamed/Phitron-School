#include<stdio.h>

int main()
{
    int numb1,numb2,large;
    printf("Enter the two number :");
    scanf("%d %d",&numb1,&numb2);

    large =1 ;
    printf("%d",(numb1>numb2) ? numb1:numb2);
}

