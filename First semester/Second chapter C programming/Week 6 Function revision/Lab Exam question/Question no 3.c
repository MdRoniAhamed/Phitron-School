#include<stdio.h>
#include<string.h>
void makeStrCopy(char in[],char out[]){
    strcpy(out,in);
}
int main()
{
    char in[100] = "hello";
    char out[101];
    int len=strlen(in);
    makeStrCopy(in,out);
    out[len]='\0';
    printf("%s",out);

    return 0;
}

