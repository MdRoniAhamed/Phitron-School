#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int val = strcmp(a,b);
    printf("value => %d",val);

    return 0;
}
/*
Tow string = to print =>0
Tow string (1 first string < 2nd string) => -1
Tow string (1 first string > 2nd string) => 1
*/

