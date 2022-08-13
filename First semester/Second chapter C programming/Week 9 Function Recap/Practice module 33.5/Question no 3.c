#include<stdio.h>

int get_length(char str[])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[]="MY name is Roni.";
    int length = get_length(str);
    printf("Sentence => %s \nSentence length=> %d",str,length);

    return 0;
}
