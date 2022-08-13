#include<stdio.h>

int main()
{
    char str[101];  ///input binary string.
    scanf("%s",str);
    str[strlen(str)]='\0';
    if(strlen(str)>=7){
    for(int i=0;i<strlen(str)-6;i++){
        if(str[i]=='1'&&str[i+1]=='1'&&str[i+2]=='1'&&str[i+3]=='1'&&str[i+4]=='1'&&str[i+5]=='1'&&str[i+6]=='1'){
            printf("YES"); ///print Yes.
            return 0;
        }
       if(str[i]=='0'&&str[i+1]=='0'&&str[i+2]=='0'&&str[i+3]=='0'&&str[i+4]=='0'&&str[i+5]=='0'&&str[i+6]=='0'){
            printf("YES");  ///print yes.
            return 0;
        }
    }
    }
    printf("NO");  ///print NO.

    return 0;
}

