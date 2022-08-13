#include<stdio.h>
void string_copy(char str[],char stri[])
{
    for(int i=0;i<strlen(stri);i++)
    {
        str[i]=stri[i];
    }
    str[strlen(stri)]='\0';
    printf("%s",str);

}
int main()
{
    char str[100],stri[100]="My name is Roni.";

    string_copy(str,stri);

    return 0;
}

