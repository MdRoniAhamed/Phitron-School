#include<stdio.h>

struct Result   ///struct.
{
    int gunfol;
    int vag;
};

struct Result divide(int x,int y)
{

    return (struct Result){x*y,x%y};    ///return value.
}
int main()
{
    int a = 50, b = 30;     ///Input value.
    struct Result result = divide(a,b);

    printf("%d %d",result.gunfol,result.vag);///Print vlaue.

}

