#include<stdio.h>

int fun(int ar[],int size)
{
    if(size==0) return 0;
    int baki_sum = fun(ar,size-1);
    int total =baki_sum+ar[size-1];
    return total;

}
int main()
{
    int ar[5]={1,2,3,4,5};
    int sum= fun(ar,5);
    printf("%d\n",sum);
    return 0;
}

