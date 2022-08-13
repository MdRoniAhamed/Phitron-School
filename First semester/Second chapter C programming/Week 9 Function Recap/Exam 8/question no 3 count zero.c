#include<stdio.h>
int count_zero(char str[])  ///Create function.
{
    int count= 0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='0'){
            count++;
        }
    }
    return count;
}
int main()
{
    char str[100];
    scanf("%s",str); ///Input string.
    str[strlen(str)] = '\0';
    int count = count_zero(str); //call function count zero.

    printf("%d\n",count); ///print count zero .
    return 0;
}

