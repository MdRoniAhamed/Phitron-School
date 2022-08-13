#include<stdio.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    str[strlen(str)]='\0';
    int frq[10]={0};
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='0'&&str[i]<='9'){
            frq[str[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",frq[i]);
    }

    return 0;
}
