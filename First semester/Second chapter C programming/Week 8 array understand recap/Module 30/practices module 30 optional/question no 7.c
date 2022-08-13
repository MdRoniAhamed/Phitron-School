#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    scanf("%s",name);  ///Input name String value.
    char max =name[0];
    for(int i=0;i<strlen(name);i++){
        if(max<name[i]){        ///Check Max character .
            max = name[i];
        }
    }
    printf("%c",max); ///Print Max character.
    return 0;
}
