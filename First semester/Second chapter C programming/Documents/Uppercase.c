#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   if(65<=ch&&ch<='Z'){
    char lo=ch-'A'+'a';
    printf("Lower =%c",lo-32 );
   }

}
