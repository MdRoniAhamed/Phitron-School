How many bytes does the string s need in memory?How many bytes does the string s need in memory?#include<stdio.h>
#include<string.h>
int main()
{
    char em[]="hello";
    char ro[10];

    strncpy(ro,em,10);
    ro[10] = '\0';
    printf("%s ", ro);
}
