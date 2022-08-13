#include<stdio.h>
#include<string.h>
int main()
{
    char a[10] = "Hello";
    char b[100] ="World";

    strncat(a,b,4);
    a[9] = '\0';
    printf("%s",a);

}
