#include<stdio.h>

void send(int *ptr,int *ptr2) ///receive pass by reference.
{
   *ptr = 100;  ///x value.
   *ptr2=200;
}

int main()
{
    int x,y;
    send(&x,&y); ///call pass by reference .
    printf("%d %d\n",x,y);  ///print x value.
    return 0;
}
