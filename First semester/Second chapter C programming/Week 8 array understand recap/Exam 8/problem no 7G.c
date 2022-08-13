#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s",str);  ///Input string.
    char str1[6]="heidi";
    str1[strlen(str1)]='\0';
    str[strlen(str)]='\0';
    int j=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==str1[j]){
            j++;
            if(j==5){
                printf("YES"); ///output Yes.
                return 0;
            }
        }
    }
    printf("NO");  ///output no.


    return 0;
}

