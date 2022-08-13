#include<stdio.h>

int main()
{
    char name[100];
    scanf("%s",name);   ///Input string value.
    int i = 0;
   // printf("%d\n",strlen(name));
    while(name[i]!='\0'){  ///length find without library functions.
        i++;
    }
    printf("%d\n",i);   ///print length.

    return 0;
}

