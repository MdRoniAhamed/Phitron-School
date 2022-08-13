#include<stdio.h>
#include<string.h>


int main()
{
    char text[101];
    char pattern[101];

    gets(text);
    scanf("%s",pattern);

    char* position = strstr(text,pattern);
    if(!position){
        printf("Not found");
    }
    else{
        printf("Found at %d\n",position-text);
    }





}
