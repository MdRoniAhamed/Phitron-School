#include<stdio.h>
int main()
{
    int a,b,s,d;
    scanf("%d %d %d %d",&a,&b,&s,&d);
    int sum=0;

    if(a>sum)
        sum=a;
    if(b > sum)
        sum=b;
    if(s > sum)
        sum=s;
    if( d > sum)
        sum=d;
//    printf("%d\n",sum);
    if(a<sum)
     printf("%d ",sum-a);
    if(b<sum)
     printf("%d ",sum-b);
    if(s<sum)
     printf("%d ",sum-s);
    if(d<sum)
     printf("%d ",sum-d);
     return 0;

}
