#include<stdio.h>

int  square(int a)
{   int v=0;
    v= a*a;
    return v;
}
int main(   )
{

    int a;
    scanf("%d",&a);

     int v=  square(a);

    printf("Square %d",v);


}
