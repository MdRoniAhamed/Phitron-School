#include<stdio.h>

int main()
{
    char str[100],stri[100];
    scanf("%s %s",str,stri);
    int index=0;
    while(str[index]!='\0'){
        index++;
    }
    printf("length is str => %d\n",index);
    index =0;
    while(stri[index]!='\0'){
        index++;
    }
    printf("length is stri =>%d",index);

    return 0;
}

