#include<stdio.h>
int main()
{
    char roni[]= "I am a Roni Ahamed. MY Father name Md : Jamal Akanda.";

    int size = sizeof(roni) / sizeof(roni[0]);

    printf("%d\n",size);

//    roni[5] = ;
printf("%s",roni);
    return 0;
}
