#include<stdio.h>
#include<string.h>

int main()
{
    char stri[102];     ///create array.
    scanf("%s",&stri); ///input array value.

    int size = strlen(stri);
    stri[size]='\0';

    for(int i=0;i<size;i++){
        if(stri[i]=='a'){
            printf("%d ",i);
        }
        if(stri[i]=='e'){
             printf("%d ",i);
        }
        if (stri[i]=='i'){
             printf("%d ",i);
        }
        if(stri[i]=='o'){
             printf("%d ",i);
        }
        if (stri[i]=='u'){
             printf("%d ",i);
        }
    }

    return 0;
}

