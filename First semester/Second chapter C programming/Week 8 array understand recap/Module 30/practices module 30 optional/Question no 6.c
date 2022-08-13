#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    scanf("%s",name);   ///Input name string value.
    int j=0;
    while(name[j]!='\0'){ ///Find the string length.
        j++;
    }
    char max[100];
    for(int i=0;i<strlen(name);i++){
        max[i] = name[i];   ///copy name string to max string without library function.
    }
    max[j]='\0';
    printf("%s",max);///print max value.
    return 0;
}

