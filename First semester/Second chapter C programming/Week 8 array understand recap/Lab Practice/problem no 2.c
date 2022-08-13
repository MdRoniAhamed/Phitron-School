#include<stdio.h>
#include<string.h>

int main()
{
    int n = 1000;
    char str[n];
    gets(str);
    int count = 0,num[1000]={0};
    str[strlen(str)]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&&str[i]<='z'){

           num[str[i]]=1;
        }
    }
    for(char v='a';v<='z';v++){
        if(num[v]>0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

