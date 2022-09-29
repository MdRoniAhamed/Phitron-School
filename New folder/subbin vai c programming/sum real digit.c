#include <stdio.h>
int main()
{
   double num1, num2;
   printf("Please enter a number: ");
   scanf("%lf",&num1);
   printf("Please enter another number: ");
   scanf("%lf",&num2);
   double jok = num1 + num2;
   double buek = num1 - num2;
   double gon = num1 * num2;
   double bag = num1 / num2;
   printf("%lf\n",jok);
   printf("%lf\n",buek);

   printf("%lf\n",gon);

   printf("%lf\n",bag);


//
//   printf("%d + %d = %d\n",num1,num2,num1+num2);
//   printf("%d - %d = %d\n",num1,num2,num1-num2);
//   printf("%d * %d = %d\n",num1,num2,num1*num2);
//   printf("%d / %d = %d\n",num1,num2,num1/num2);
    return 0;
}
