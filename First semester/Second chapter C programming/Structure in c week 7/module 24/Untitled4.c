#include<stdio.h>

int main()
{
    int fib[5];
   fib[0] = fib[1] = 1;
for (int i=2; i<5; i++) {
fib[i] = fib[i-1]+fib[i-2];
}
printf("%d", fib[5]);

}
/*     fib[2] = 2;

    fib[3]= fib[2] + fib[1];
       =  3 ;  2     +    1
    fib[4] = fib[3] + fib[2];//i-2 i=4-2=2
           =   3    +  2
    fib[4] = 5;
    */
