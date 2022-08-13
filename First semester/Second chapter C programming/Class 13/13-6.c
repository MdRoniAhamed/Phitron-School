#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);

    int val = strcmp(a,b);
    printf("%d",val);

}
