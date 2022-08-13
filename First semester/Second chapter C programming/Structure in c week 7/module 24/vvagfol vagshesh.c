#include<stdio.h>

struct Result
{
    int vagfol;
    int vagshesh;
};

struct Result divide(int x,int y)
{

    return (struct Result){x/y,x%y};
}
int main()
{
    int a = 10, b = 3;
    struct Result result = divide(a,b);
    printf("%d %d",result.vagfol,result.vagshesh);

}

