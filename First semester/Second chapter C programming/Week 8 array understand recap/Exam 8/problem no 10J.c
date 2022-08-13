#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str); ///Input string.
    int len=strlen(str);
    str[len]='\0';
    int val=0,count=0;
    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            count++;
        }
    }
    if((len-count==1)&&(str[0]>='a'&&str[0]<='z')){  ///check condition .
            str[0] -=32;        ///Lower case to uppercase.
      for(int i=1;i<len;i++){  ///uppercase to lowercase.
        str[i] +=32;
      }
    }
    else if(len-count==0){
        for(int i=0;i<len;i++){  ///Uppercase to lowercase .
        str[i] +=32;
      }
    }
    printf("%s\n",str);  ///print string.

    return 0;
}

