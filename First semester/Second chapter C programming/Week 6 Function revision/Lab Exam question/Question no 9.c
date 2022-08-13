#include<stdio.h>

int main()
{
    char text[1000];
    gets(text);
    char text1;
    scanf("%c",&text1);
    int i=0;
    while(text[i]!='\0'){
    if(text[i]==text1){
    printf("Fount at %d\n",i+1); // Index 0=1 থেকে গণনা করছি।
    }
    i++;
    if(text[i]==NULL) break;
    }
    return 0;
}

