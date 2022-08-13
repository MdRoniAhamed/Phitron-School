#include<stdio.h>

int main()
{
    int limit,month;
    scanf("%d %d",&limit,month);

    int baki=0;
    for(int m=1;m<=month;m++)
    {
        int used;
        scanf("%d",&used);

        int month_limit = limit + baki;
        baki = month_limit - used;

    }
    int final_result = baki + limit;
    printf("%d",final_result);
    return 0;
}

