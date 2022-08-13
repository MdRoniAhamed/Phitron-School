#include<stdio.h>

int odd_even(void)  ///creat
{
    int value;
    scanf("%d",&value);     //int value input.
    if(value%2==0){
        printf("Even.\n");  //print even.
    }
    else{
        printf("Odd.\n");  //print odd.
    }
}
int main()
{
    odd_even();  ///call odd even chack fanction.
    return 0;
}

