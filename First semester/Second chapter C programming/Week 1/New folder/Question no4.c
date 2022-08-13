#include<stdio.h>

int main()
{
    printf("Enter principle: ");
    float principle,time,rate;
    scanf("%f",&principle);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Enter rate: ");
    scanf("%f",&rate);
    /*
    Rule:
    SI = P*T*R/100;
    */

    float SI=principle*time*rate/100;
    printf("Simple Interest %f\n",SI);
    printf("Principa + Interest = %.1f\n",SI+principle);

    return 0;
}

