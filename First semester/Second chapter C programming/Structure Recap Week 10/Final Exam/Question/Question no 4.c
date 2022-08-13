#include<stdio.h>

int main()
{
    long long int a=5;  //size.
     long long int frq[1000]={0};   ///frequency array .
     for(long long int i=0;i<a;i++)
     {
         frq[i]++;
     }
       for(long long int i=0;i<a;i++)
     {
         if(frq[i]>0){
         printf("%lld ",frq[i]);  ///print frequency array.
         }
     }
    return 0;
}

// 18446744073709551615
