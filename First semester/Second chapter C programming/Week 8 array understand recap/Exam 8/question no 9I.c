#include<stdio.h>

int main()
{
    int n;///Inter string size.
    scanf("%d",&n);
    char str[n];
    int Z=0,O=0;
    scanf("%s",str); ///Input string value.
    str[strlen(str)]='\0';
    for(int i=0;i<n;i++){
        if(str[i]=='n'){
            O++;
        }
        else if(str[i]=='z'){
           Z++;
        }
    }
    for(int i=0;i<O;i++){
        printf("1 ");  ///print 1.
    }
    for(int i=0;i<Z;i++){
        printf("0 "); ///print 0.
    }

    return 0;
}

/*
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", &str);

    int zero = 0, one = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] == 'z'){
            zero++;
        }
        else if(str[i] == 'n'){
            one++;
        }
    }
    for(int i=0; i<one; i++){
        printf("%d ", 1);
    }
    for(int i=0; i<zero; i++){
        printf("%d ", 0);
    }
    return 0;
}
*/
