#include<stdio.h>
void send(int *ar)
{
    int sz=sizeof(ar)/sizeof(ar[0]); ///is not value.
    printf("%d\n",sz);
}
int main()
{
    int ar[2]={1,2};
    send(ar);
    return 0;
}

