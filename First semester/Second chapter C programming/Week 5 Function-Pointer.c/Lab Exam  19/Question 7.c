#include<stdio.h>

int  LargNumAv(int a, int b,int *c,int *d)
{
    int Av=0;;  /// Find the Average of large.
    if(a>b){
        Av=a;
    }
    else{         /// Find the Average of large.
        Av=b;
    }
    a=b=Av;   ///Average number of large

    if(Av!=0){
        *c=a;
        *d=b;
        return 2;///Return by Address.
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);///Input Number of value.

    int c,d;
    int AV=LargNumAv(a,b,&c,&d);///Return by address
    printf("%d %d\n",c,d);///Output Number of value.

    return 0;
}
