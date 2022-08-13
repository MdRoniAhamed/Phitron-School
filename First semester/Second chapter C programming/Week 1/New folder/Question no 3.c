#include<stdio.h>

int main()
{
    printf("First number: ");
    int num1;
    scanf("%d",&num1);
    printf("Second number: ");
    int num2;
    scanf("%d",&num2);

    printf("Sum= %d\n",num1+num2);
    if(num1>num2){
    printf("Difference= %d\n",num1-num2);
    }
    else{
        printf("Difference= %d\n",num2-num1);
    }
    printf("Product= %d\n",num1*num2);
    printf("Quotient= %d\n",num1/num2);
    printf("Modulus= %d\n",num1%num2);
    return 0;
}

