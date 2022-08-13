#include<stdio.h>
#include<string.h>

int main()
{
    char first[100],cp[100];
    scanf("%s",first);
    strcpy(cp,first);
    strrev(cp);
    for(int i = 0;i < strlen(first);i++){
        if(first[i]!=cp[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");


    return 0;
}

