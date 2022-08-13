#include<stdio.h>

    void GCD(int x, int y)
    {
        while (y > 0) {
            int temp = x%y;
            x=y;
            y=temp;
        }
        int GCD=x;
    printf("GCD = %d",GCD);
    }
//43/47=43/


int main()
{
   int n,m;
   scanf("%d %d",&n ,&m);
   GCD(n, m);
}
