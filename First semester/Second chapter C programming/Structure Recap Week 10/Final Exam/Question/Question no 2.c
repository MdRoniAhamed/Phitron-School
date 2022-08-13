#include<stdio.h>

int main()
{
    int N; ///size N input.
    scanf("%d",&N);
    for(int i=1;i<=N;i++)  ///For loop
    {
        if(i%2==0&&i%7==0)  ///condition i%2 ==0 && i%7==0;
        {
            printf("%d ",i);  ///print value.
        }
    }
    return 0;
}

