#include<stdio.h>

void set_min_max(int *a,int *b) ///Receive address pointer.
{
    if(*a>*b)
    {
        int temp = *a;   ///MIN and MAX value find.
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a,b; ///value
    scanf("%d %d",&a,&b);   ///Input value.
    set_min_max(&a,&b);     ///call pass by address pinter .
    printf("Min Value=> %d, Max Value=> %d\n",a,b); ///print value.
    return 0;
}
