#include<stdio.h>
#include<string.h>

int main()
{
    char string[50];
    scanf("%s",&string);
    int count=0,num=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='a')
        {
            count++;
        }
    }
    int len=strlen(string)-count;
    if(len>=count)
    {
        int l=len;
        for(int i=0;i<l;i++)
        {
            len--;
            if(count>len){
                  num=  count+len;
                break;
            }
        }

    }
    else{
        num = strlen(string);
    }
    printf("%d",num);
    return 0;
}

