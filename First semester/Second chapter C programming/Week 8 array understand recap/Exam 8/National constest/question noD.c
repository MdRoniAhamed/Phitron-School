#include<stdio.h>
#include<string.h>

int main()
{
    char S[50];
    scanf("%s",&S);
    S[strlen(S)]='\0';
    char s[50];
    strcpy(s,S);
    printf("%s",s);
    return 0;
}

