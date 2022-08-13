#include<stdio.h>
int main()
{
    int i , row=0;

    for (i =100; i>=0; i-=3)///100 97 94 91 >0
    {
        row +=i;

    }
    printf("%d",row);

    return 0;
}
