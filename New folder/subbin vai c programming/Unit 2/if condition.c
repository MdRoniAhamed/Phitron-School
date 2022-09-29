#include<stdio.h>

int main()
{
    int n;

    n = 0;

    if(n < 0)
    {
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else if (n==0)
    {
        printf("The number is zero!\n");
    }
}
