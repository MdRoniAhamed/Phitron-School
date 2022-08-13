#include<stdio.h>

int main()
{
    for(int i=0;i<99;i++)
    {
        int num;
        scanf("%d",&num);
        if(num==42)
        {
            break;
        }
        printf("%d\n",num);
    }
    return 0;
}
