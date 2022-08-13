#include<stdio.h>

int main()
{
    int input;
    scanf("%d",&input);  ///Input size.
    for(int i=1; i<=input; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");  ///Print pattern.
        }
        printf("\n");
    }
    for(int i=input-1; i>=1; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf("*"); ///print pattern.
        }
        printf("\n");
    }

    return 0;
}

