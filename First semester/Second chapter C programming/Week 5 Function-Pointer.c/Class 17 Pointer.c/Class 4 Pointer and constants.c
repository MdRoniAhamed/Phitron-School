#include<stdio.h>
int main()
{
    const int N  =  20;
   const int * const pn  = &N;
//    *pn = 10;
    printf("%p has value %d\n",pn,*pn);
    int M = 1000;
//    *pn = 50;
//    pn= &M;
    printf("%p has value %d\n",pn,*pn);
}
