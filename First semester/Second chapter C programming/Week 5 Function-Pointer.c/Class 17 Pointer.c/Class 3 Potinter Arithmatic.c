#include<stdio.h>
int main()

{
   int val1,val2;
   int *pa =&val1;
   int *pb =&val2;
   printf("pa = %lld, pb = %lld \n",pa,pb);
   printf("Difference = %d",pa-pb);
}
