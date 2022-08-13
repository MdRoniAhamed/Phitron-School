#include<stdio.h>
int main()
{
    int i,b,result=0;
    char o;
    printf("Enter the first number:");
    scanf(" %d",&i);
    printf("Enter Operator:");
    scanf(" %c",&o);
    printf("Enter the second:");
    scanf(" %d",&b);

    switch(o){
        case '+':
        result= i+b;break;
        case '-':
        result= i-b;break;
        case '*':
        result= i*b;break;
        case '/':
        result=i/b;break;


    }
    printf("Result final:%d",result);
}
