#include<stdio.h>

int main()
{
    srand(time(0));
    int hidden = rand()%100 + 1;
    printf("%d",hidden);
    return 0;
}

