#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0,gon=0,mines=0;
    sum = a+b;
    gon =a*b;
    mines =a-b;
    if(sum>mines&&sum>gon)
        printf("%d",sum);
   else if(gon>mines&&gon>sum)
        printf("%d",gon);
   else
        printf("%d",mines);

        return 0;
}
