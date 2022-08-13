#include<stdio.h>
#include<string.h>
void check_char(char s[],char ch)
{
    for(int i=0;i<strlen(s);i++){
          //    printf("Yes");
          char value=s[i];
        if(value==ch){
            printf("Yes\n");
            return;
        }
    }
    printf("NO");
}
int main()
{
    char a[]="helloboe",b[]="world";
    char c='l';
    check_char(a,c);
    return 0;
}

