#include<stdio.h>
 int main()

{
   int a[51];
   int c,d;
   scanf("%d%d",&c,&d);
   for(int i=0;i<c;i++){
    scanf(" %d",&a[i]);
   }
   int n=0;
   for(int i=0;i<c;i++){
    if(a[i]>d){
         //   printf("%d",a[i]);
        n ++;
    }
   }

   printf("%d",n);
}
