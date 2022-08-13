#include<stdio.h>

int main()
{
    for(int i=1; i<=100; i++) ///Loop 1 to 100.
    {
        if(i%2==0)      /// check Even  number and odd number.
        {
            printf("Goodbye\n");    ///Even number then print “Goodbye”
        }
        else
        {
            printf("I Love Programming!\n");   ///odd number then print “I Love Programming!”
        }
    }
    return 0;
}

