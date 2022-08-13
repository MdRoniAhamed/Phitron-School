#include<stdio.h>

int main()
{
    char alphabet[1000];
    scanf("%s",&alphabet);

    int count[26]={0};

    for(int i =0;i<strlen(alphabet);i++){
        char value = alphabet[i];
        count[value-'a']=1;
    }
    for(char value='a';value<='z';value++){
        if(count[value-'a']==0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}


