#include<stdio.h>
void Sum(int a, int b, int *sum){

    *sum=a+b;
}///Md Roni Ahamed.
int main()
{
    int a=10,b=10;
    int sum;
    Sum(a,b,&sum);
   printf("%d",sum);
    return 0;
}
