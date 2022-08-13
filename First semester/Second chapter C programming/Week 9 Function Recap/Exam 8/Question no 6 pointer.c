#include<stdio.h>

int main()
{
    int value = 10; //int value.
    int *P = &value; ///pointer P. access int value.
    int **Q= &P;   /// Pointer Q access pointer P.
    int ***R = &Q; ///Pointer R access pointer Q.
    ***R = 25;  //change value int value .
    printf("%d\n",value); ///print int value .
    return 0;
}

