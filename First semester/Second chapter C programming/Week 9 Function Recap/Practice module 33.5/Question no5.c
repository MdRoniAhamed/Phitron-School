#include<stdio.h>
#include<string.h>
void string_concat(char str[],char stri[])
{
    int len1=strlen(str),len2=strlen(stri);

    for(int i=len1,j=0;i<len1+len2;i++,j++){
        str[i] = stri[j];
    }
    printf("%s",str);

}
int main()
{
    char str[100]="My ",stri[100]="name is Roni.";

    string_concat(str,stri);

    return 0;
}

