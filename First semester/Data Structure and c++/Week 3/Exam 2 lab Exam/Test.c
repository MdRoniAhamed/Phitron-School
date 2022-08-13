#include<stdio.h>

int main()
{
    char chr;
    scanf("%c",&chr);
    if(chr>='0' && chr<='9')
    {
        printf("digit\n");
    }
    else
    {
        printf("not adigit\n");
    }
    return 0;
}

