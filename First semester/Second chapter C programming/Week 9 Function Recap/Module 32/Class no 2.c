#include<stdio.h>

int make_sum(int a,int b){
    int sum=a+b;
    sum=sum*2;
    sum=sum-100;
    sum=sum+1000;

    return sum;
    }
int main()
{
    int  s=make_sum(10,105);
    int s2=make_sum(2,14);
    printf("%d %d\n",s,s2);

    return 0;
}

