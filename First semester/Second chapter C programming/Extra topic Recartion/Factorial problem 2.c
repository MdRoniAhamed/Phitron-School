#include<stdio.h>
int factorial(int n)
{
    if(n==1) return 1;
    int small_factorial=factorial(n-1);
    int final_ans=small_factorial*n;
//    return final_ans;
}
int main()
{
    int fact=factorial(5);
    printf("%d\n",fact);
    return 0;
}
