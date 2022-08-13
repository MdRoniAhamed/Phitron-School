#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num;
    scanf("%d",&num);

    if(!(num >= 0 && num <= 10))
    {
        printf("Okay");
    }
    else{
        printf("Not okay");
    }
    return 0;
}

