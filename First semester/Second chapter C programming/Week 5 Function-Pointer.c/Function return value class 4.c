#include<stdio.h>

 int calcGCD(int x, int y)
    {
        while (y > 0) {
            int temp = x%y;
            x=y;
            y=temp;
        }
        int GCD=x;
    return GCD;
   }



int main()
{
   int n,m;
   scanf("%d %d",&n ,&m);
   int g = calcGCD(n, m);
   printf("GCD is %d\n",g);
   n /= g;
   m /=g;
   printf("Simplied form: %d/%d\n",n,m);
}

