#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if ('a' <= ch && ch<= 'z'){
  /* C =67 - A= 65 + a= 97;
  lo =2 + 97=99= ;
  */

    printf("Lower case = %c",ch-32);

    }
    else{
        printf("Not lowercase");
    }
}
