#include<stdio.h>
int main()
{
    int a = 10, x;
    x = a-- + ++a;
    printf("%d",x);
    return 0;
}
