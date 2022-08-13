#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);     ///Input array size N;
    int array[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&array[i]);   ///Input array value.
    }
    int mul;
    scanf("%d",&mul);   ///Input mul value. .
    for(int i=0; i<N-1; i++)
    {
        for(int j=i; j<N; j++)
        {
            if(array[j]*array[i]==mul)    ///check multiplying two different values .
            {
                printf("Yes");    ///print Yes.
                return 0;
            }
        }
    }
    printf("NO");    ///Print No.
    return 0;
}

