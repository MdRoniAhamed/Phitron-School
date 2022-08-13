#include<stdio.h>
int main()
{
    char a[10];
    a[0] = 'b';
    a[1] = 'a';
    a[2] = 'n';
    a[3] = 'a';
    a[4] = 'n';
    a[5] = 'a';
    int len=strlen(a);
    a[len]='\0';
    for(int i=0;i<10;i++){
        printf("%c",a[i]);
    }
}
