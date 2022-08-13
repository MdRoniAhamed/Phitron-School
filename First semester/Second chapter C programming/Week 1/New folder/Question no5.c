#include<stdio.h>

int main()
{
    float num1;
    printf("Enter Number: ");
    scanf("%f",&num1);
    int n=num1;
    printf("Integer part: %d\n",n);
    printf("Real part: %.3f\n",num1-n);
    return 0;
}

